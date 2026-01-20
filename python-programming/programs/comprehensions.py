nums = [1, 2, 3, 4, 5]

# Traditional
squares = []
for n in nums:
    squares.append(n*n)

# Comprehension
squares_comp = [n*n for n in nums]

print(f"Squares: {squares_comp}")

evens = [x for x in range(10) if x % 2 == 0]
print(f"Evens: {evens}")
