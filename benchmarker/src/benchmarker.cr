require "benchmark"

# Prefix of pathes for each executable
PATH_PREFIX = "../../../bin/"

# Path for client binary
CLIENT = File.expand_path(PATH_PREFIX + "client", __FILE__)

# Each framework
LANGS = [
  {lang: "ruby", targets: [
     {name: "rails", bin: "server_ruby_rails"},
     {name: "sinatra", bin: "server_ruby_sinatra"},
     {name: "roda", bin: "server_ruby_roda"},
   ]},
  {lang: "crystal", targets: [
     {name: "kemal", bin: "server_crystal_kemal"},
     {name: "router_cr", bin: "server_crystal_router_cr"},
   ]},
  {lang: "go", targets: [
     {name: "echo", bin: "server_go_echo"},
     {name: "gorilla_mux", bin: "server_go_gorilla_mux"},
     {name: "fasthttprouter", bin: "server_go_fasthttprouter"},
   ]},
  {lang: "rust", targets: [
     {name: "iron", bin: "server_rust_iron"},
     {name: "nickel", bin: "server_rust_nickel"},
     {name: "rocket", bin: "server_rust_rocket"},
   ]},
  {lang: "node", targets: [
     {name: "express", bin: "server_node_express"},
   ]},
  {lang: "elixir", targets: [
     {name: "plug", bin: "server_elixir_plug"},
     {name: "phoenix", bin: "server_elixir_phoenix"},
   ]},
  {lang: "swift", targets: [
     {name: "vapor", bin: "server_swift_vapor"},
     {name: "perfect", bin: "server_swift_perfect"},
     {name: "kitura", bin: "server_swift_kitura"},
   ]},
]

# struct for benchmark result
record BenchResult, max : Float64, min : Float64, ave : Float64, total : Float64
# struct for target
record Target, lang : String, name : String, bin : String

# Executor of each server
class ExecServer
  def initialize(@target : Target)
    # Path of the executable
    executable = File.expand_path(PATH_PREFIX + @target.bin, __FILE__)
    # Running the server
    @process = Process.new(executable)
  end

  # Kill the server process
  def kill
    if @target.name == "plug"
      path = File.expand_path("../../../elixir/plug/_build/prod/rel/my_plug/bin/my_plug", __FILE__)
      Process.run("bash #{path} stop", shell: true)
    elsif @target.name == "phoenix"
      path = File.expand_path("../../../elixir/phoenix/_build/prod/rel/my_phoenix/bin/my_phoenix", __FILE__)
      Process.run("bash #{path} stop", shell: true)
    end
    # kill the server_lang_framework @process AND it's children
    Process.run("pkill -9 -P #{@process.pid}", shell: true)
  end
end

# Running client and returning span
def client
  s = Time.now
  `#{CLIENT} -t 16 -r 5000`
  e = Time.now
  (e-s).to_f
end

# Benchmark
# server : server context
# count  : number of samples
def benchmark(server, count) : BenchResult
  max   : Float64 = -1.0
  min   : Float64 = 100000.0
  ave   : Float64 = 0.0
  total : Float64 = 0.0

  # Running server
  exec_server = ExecServer.new(server)

  # Wait for the binding
  sleep 5

  count.times do |i|
    span = client
    max = span if span > max
    min = span if span < min
    total += span
  end

  ave = total/count.to_f
  exec_server.kill

  result = BenchResult.new(max, min, ave, total)

  sleep 3

  result
end

def all_frameworks : Array(Target)
  targets = [] of Target

  LANGS.each do |lang|
    lang[:targets].each do |framework|
      targets.push(Target.new(lang[:lang], framework[:name], framework[:bin]))
    end
  end

  targets
end

def header(lang : String, name : String, max : String, min : String, ave : String)
  puts "%-25s %-25s %15s %15s %15s" % [lang, name, max, min, ave]
end

def result_line(lang : String, name : String, max : Float64, min : Float64, ave : Float64)
  puts "%-25s %-25s %15f %15f %15f" % [lang, name, max, min, ave]
end

header("Language (Runtime)", "Framework (Middleware)", "Max [sec]", "Min [sec]", "Ave [sec]")
header("-" * 25, "-" * 25, "-" * 15, "-" * 15, "-" * 15)

targets = if ARGV.size > 0
            all_frameworks.reject{ |target| target.lang != ARGV[0] && target.name != ARGV[0] }
          else
            all_frameworks
          end

abort "No targets found for #{ARGV[0]}" if targets.size == 0

targets.each do |target|
  result = benchmark(target, 5)
  result_line(target.lang, target.name, result.max, result.min, result.ave)
end
