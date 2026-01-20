# Single Neuron
weights = [0.5, -0.5]
bias = 0.1

def perceptron(inputs):
    total = sum(i*w for i,w in zip(inputs, weights)) + bias
    return 1 if total > 0 else 0

print(perceptron([1, 0]))
