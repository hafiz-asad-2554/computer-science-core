import random

def dropout(layer, rate):
    return [n if random.random() > rate else 0 for n in layer]

print(dropout([1, 1, 1, 1, 1], 0.5))
