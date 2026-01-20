import math

def relu(x): return max(0, x)
def tanh(x): return math.tanh(x)

print(relu(-5), relu(5))
