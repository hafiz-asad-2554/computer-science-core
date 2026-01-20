import numpy as np

def sigmoid(x): return 1/(1+np.exp(-x))

inputs = np.array([0.5, 0.1])
weights = np.array([0.4, 0.7])
bias = 0.2

output = sigmoid(np.dot(inputs, weights) + bias)
print(output)
