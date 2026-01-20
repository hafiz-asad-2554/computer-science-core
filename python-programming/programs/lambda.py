add = lambda a, b: a + b
square = lambda x: x * x

print("Add:", add(5, 3))
print("Square:", square(4))

nums = [1, 2, 3, 4, 5]
doubled = list(map(lambda x: x * 2, nums))
print("Doubled:", doubled)
