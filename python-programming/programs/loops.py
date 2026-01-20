n = int(input("Enter number: "))

print("For Loop:")
for i in range(1, n+1):
    print(i, end=" ")

print("\nWhile Loop:")
i = 1
while i <= n:
    print(i, end=" ")
    i += 1
