calculator_module = __import__("calculator_1", globals(), locals(), ["add", "subtract", "multiply", "divide"], 0)

a = 10
b = 5

result_add = calculator_module.add(a, b)
result_subtract = calculator_module.subtract(a, b)
result_multiply = calculator_module.multiply(a, b)
result_divide = calculator_module.divide(a, b)

print("{} + {} = {}".format(a, b, result_add))
print("{} - {} = {}".format(a, b, result_subtract))
print("{} * {} = {}".format(a, b, result_multiply))
print("{} / {} = {}".format(a, b, result_divide))
