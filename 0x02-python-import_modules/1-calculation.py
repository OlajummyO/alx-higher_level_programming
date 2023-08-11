#!/usr/bin/python3

if __name__ == "__main__":
    """Print the sum, difference, multiple and quotient of 10 and 5."""
    from calculator_1 import add, sub, mul, div

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
