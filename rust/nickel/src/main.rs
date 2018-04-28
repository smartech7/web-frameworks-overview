#[macro_use]
extern crate nickel;

use nickel::{Nickel, HttpRouter};

fn main() {
    let mut server = Nickel::new();
    server.get("/", middleware!(""));
    server.get("/user/:id",
               middleware!{|request|
                           request.param("id").unwrap()
               });
    server.post("/user", middleware!(""));
    server.listen("0.0.0.0:3000").unwrap();
}
