#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
from sanic import Sanic
from sanic.response import text

app = Sanic(log_config=None)


@app.route("/")
async def index(request):
    return text('')


@app.route("/user/<id:int>", methods=['GET'])
async def user_info(request, id):
    return text(str(id))


@app.route("/user", methods=['POST'])
async def user(request):
    return text('')

if __name__ == "__main__":
    app.run(access_log=False)
