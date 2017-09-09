# Which is the fastest?

Measuring response times for each framework (middleware).
Each framework has to have two features; routing and parsing path parameters.

## Result

<!-- Result from here -->
Last update: 2017-09-09
```
OS: Darwin (version: 16.6.0, arch: x86_64)
CPU Cores: 8
```

### Ranking (Framework)

1. [router_cr](https://github.com/tbrand/router.cr) (crystal)
2. [raze](https://github.com/samueleaton/raze) (crystal)
3. [japronto](https://github.com/squeaky-pl/japronto) (python)
4. [fasthttprouter](https://github.com/buaazp/fasthttprouter) (go)
5. [nickel](https://github.com/nickel-org/nickel.rs) (rust)
6. [iron](https://github.com/iron/iron) (rust)
7. [kemal](https://github.com/kemalcr/kemal) (crystal)
8. [rocket](https://github.com/SergioBenitez/Rocket) (rust)
9. [gorilla_mux](https://github.com/gorilla/mux) (go)
10. [echo](https://github.com/labstack/echo) (go)
11. [iris](https://github.com/kataras/iris) (go)
12. [plug](https://github.com/elixir-lang/plug) (elixir)
13. [vapor](https://github.com/vapor/vapor) (swift)
14. [phoenix](https://github.com/phoenixframework/phoenix) (elixir)
15. [aspnetcore](https://github.com/aspnet/Home) (csharp)
16. [perfect](https://github.com/PerfectlySoft/Perfect) (swift)
17. [sanic](https://github.com/channelcat/sanic) (python)
18. [clusterexpress](https://github.com/LearnBoost/cluster) (node)
19. [akkahttp](https://github.com/akka/akka-http) (scala)
20. [express](https://github.com/expressjs/express) (node)
21. [roda](https://github.com/jeremyevans/roda) (ruby)
22. [kitura](https://github.com/IBM-Swift/Kitura) (swift)
23. [sinatra](https://github.com/sinatra/sinatra) (ruby)
24. [rails](https://github.com/rails/rails) (ruby)

### Ranking (Language)

1. crystal ([router_cr](https://github.com/tbrand/router.cr))
2. python ([japronto](https://github.com/squeaky-pl/japronto))
3. go ([fasthttprouter](https://github.com/buaazp/fasthttprouter))
4. rust ([nickel](https://github.com/nickel-org/nickel.rs))
5. elixir ([plug](https://github.com/elixir-lang/plug))
6. swift ([vapor](https://github.com/vapor/vapor))
7. csharp ([aspnetcore](https://github.com/aspnet/Home))
8. node ([clusterexpress](https://github.com/LearnBoost/cluster))
9. scala ([akkahttp](https://github.com/akka/akka-http))
10. ruby ([roda](https://github.com/jeremyevans/roda))

### All frameworks

| Language (Runtime)        | Framework (Middleware)    |       Max [sec] |       Min [sec] |       Ave [sec] |
|---------------------------|---------------------------|-----------------|-----------------|-----------------|
| ruby                      | rails                     |      841.399877 |      676.438452 |      722.636821 |
| ruby                      | sinatra                   |       57.697190 |       46.209645 |       50.459453 |
| ruby                      | roda                      |       17.317097 |       16.412767 |       16.854059 |
| crystal                   | kemal                     |        3.363862 |        3.234340 |        3.328971 |
| crystal                   | router_cr                 |        2.726710 |        2.632183 |        2.678572 |
| crystal                   | raze                      |        2.767154 |        2.696519 |        2.737333 |
| go                        | echo                      |        4.308165 |        4.124063 |        4.206013 |
| go                        | gorilla_mux               |        3.934151 |        3.774988 |        3.878869 |
| go                        | iris                      |        4.445072 |        4.174117 |        4.300272 |
| go                        | fasthttprouter            |        3.053054 |        2.918569 |        2.989856 |
| rust                      | iron                      |        3.075307 |        3.038552 |        3.058131 |
| rust                      | nickel                    |        3.066463 |        3.020018 |        3.040962 |
| rust                      | rocket                    |        3.515951 |        3.480833 |        3.495029 |
| node                      | express                   |       15.286487 |       15.029392 |       15.094188 |
| node                      | clusterexpress            |        8.759166 |        8.074711 |        8.340509 |
| elixir                    | plug                      |        5.195523 |        4.494252 |        4.767897 |
| elixir                    | phoenix                   |        5.752392 |        5.007042 |        5.309415 |
| swift                     | vapor                     |        5.332569 |        5.147196 |        5.230780 |
| swift                     | perfect                   |        6.634738 |        6.310278 |        6.481861 |
| swift                     | kitura                    |       19.619596 |       18.269236 |       18.989244 |
| scala                     | akkahttp                  |       10.373932 |        7.748918 |        8.917111 |
| csharp                    | aspnetcore                |        5.768270 |        4.973531 |        5.401796 |
| python                    | sanic                     |        8.094584 |        5.404344 |        6.744556 |
| python                    | japronto                  |        3.021790 |        2.884424 |        2.941311 |
<!-- Result till here -->

## Current target frameworks (middlewares)

 - Ruby
   - [Rails](https://github.com/rails/rails)
   - [Sinatra](https://github.com/sinatra/sinatra)
   - [Roda](https://github.com/jeremyevans/roda)
 - Crystal
   - [Kemal](https://github.com/kemalcr/kemal)
   - [raze](https://github.com/samueleaton/raze)
   - [router.cr](https://github.com/tbrand/router.cr)
 - Go
   - [Echo](https://github.com/labstack/echo)
   - [gorilla-mux](https://github.com/gorilla/mux)
   - [iris](https://github.com/kataras/iris)
   - [fasthttprouter](https://github.com/buaazp/fasthttprouter)
 - Rust
   - [IRON](https://github.com/iron/iron)
   - [nickel.rs](https://github.com/nickel-org/nickel.rs)
   - [Rocket](https://rocket.rs) (nightly)
 - node
   - [express](https://github.com/expressjs/express)
   - [express/cluster](https://github.com/LearnBoost/cluster)
 - Elixir
   - [Plug](http://github.com/elixir-lang/plug)
   - [Phoenix](http://github.com/phoenixframework/phoenix)
 - Swift
   - [Vapor](https://vapor.codes)
   - [Perfect](https://www.perfect.org)
   - [Kitura](http://www.kitura.io)
 - Scala
   - [Akka-Http (Routing DSL)](http://doc.akka.io/docs/akka-http/current/scala/http/introduction.html#routing-dsl-for-http-servers)
 - C#
   - [ASP.NET Core](https://www.microsoft.com/net/core)
 - Python
   - [sanic](https://github.com/channelcat/sanic)
   - [japronto](https://github.com/squeaky-pl/japronto)

See Development section when you want to add new languages or frameworks.

## The rule

We want to know the response time, not a usability. So full-stack framework is at a disadvantage.
 - Each server has no special logics.
 - Each server's executable is named as `server_[Lauguage]_[Framework]`. (For example, `server_ruby_sinatra`)
 - There are only 3 routes
   - GET  '/'         return status code 200 with empty body
   - GET  '/user/:id' return status code 200 with the id
   - POST '/user'     return status code 200 with empty body

## Installation

Required environment -> See **Current target frameworks(middlewares)**

### By using Neph

[Neph](https://github.com/tbrand/neph) is a modern command line job processor that can be substitute for `make` command.

To compile servers and benchmarker,
```
> neph
```
For each language,
```
> neph -j ruby
```
For each framework,
```
> neph -j rails
```

See [neph.yml](https://github.com/tbrand/which_is_the_fastest/blob/master/neph.yml)

### By using make

To compile servers and benchmarker,
```
> make
```
For each language,
```
> make ruby
```
For each framework,
```
> make rails
```

## Usage

You can take a benchmark by
```bash
> bin/benchmarker
```

For each language
```bash
> bin/benchmarker ruby
```

For each framework
```bash
> bin/benchmarker rails
```

For comparison (Comparing rails, kemal and router.cr in this example)
```bash
> bin/benchmarker rails crystal
```

If you take it manually, you can run each server by
```bash
> bin/server_[Language]_[Framework]
```

and run client by
```bash
> time bin/client
```

You can set # of threads and # of the loops of the request(there are 3 requests in a loop) by
```bash
> time bin/client -t 16 -r 1000
```
In the above example, 16 threads requests 1000 * 3 times.
So 48000 requests are sent in total.

## Using Docker
Setup servers by using `docker` is under **WIP**. Currently, crystal and ruby servers are supported. For example
```bash
docker-compose up rails
```

Then you can run your client by
```bash
time ./bin/client
```
## Development
 - **Give me PR when you want to add other web frameworks**
 - **Give me PR when you can tuning each framework (under the rule)**

### Where should I modify when adding new framework
 - `/[language]/[framework]/[codes]` <- Project iteself
 - `benchmarker/benchmarker.cr` <- Adding it as a target to
 - `README.md` <- Adding it as a target framework of the list
 - `Makefile`
 - `neph.yml` (optional)

Anyway, you don't have to care about details since maintainer can fix them after merging it. The result will be updated by maintainer.

## Contributing

1. Fork it (https://github.com/tbrand/which_is_the_fastest/fork)
2. Create your feature branch (git checkout -b my-new-feature)
3. Commit your changes (git commit -am 'Add some feature')
4. Push to the branch (git push origin my-new-feature)
5. Create a new Pull Request

## Contributors

- [tbrand](https://github.com/tbrand) Taichiro Suzuki - creator, maintainer
- [OvermindDL1](https://github.com/OvermindDL1) OvermindDL1 - maintainer

## Donate

```
1AE9P6TUVik1rJGQhaSqGWRk1oAQ3DJnmo
```

![QRCode](https://user-images.githubusercontent.com/3483230/30004198-ccfeb086-9105-11e7-821c-927e4aa7af70.png)
