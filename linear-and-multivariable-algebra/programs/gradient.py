import numpy as np

def numerical_gradient(f, x, h=0.0001):
    grad = np.zeros_like(x)
    for i in range(x.shape[0]):
        x_plus = x.copy()
        x_plus[i] += h
        x_minus = x.copy()
        x_minus[i] -= h
        grad[i] = (f(x_plus) - f(x_minus)) / (2 * h)
    return grad

def func(x):
    return x[0]**2 + x[1]**2

print(numerical_gradient(func, np.array([3.0, 4.0])))
