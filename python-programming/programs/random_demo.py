import random

print("Random number 1-100:", random.randint(1, 100))
print("Random choice:", random.choice(["Head", "Tail"]))

numbers = [1, 2, 3, 4, 5]
random.shuffle(numbers)
print("Shuffled:", numbers)
