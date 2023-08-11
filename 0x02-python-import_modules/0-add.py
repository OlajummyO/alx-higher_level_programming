#!/usr/bin/python3

add_module = __import__

add = add_module.add

a = 1
b = 2

result = add(a, b)
print("{} + {} = {}".format(a, b, result))
