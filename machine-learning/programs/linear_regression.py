import numpy as np

# y = 2x + 1
X = np.array([1, 2, 3, 4, 5])
y = np.array([3, 5, 7, 9, 11])

# Manual Gradient Descent
m = 0
b = 0
lr = 0.01

for _ in range(1000):
    y_pred = m*X + b
    error = y - y_pred
    m_grad = -2 * np.mean(X * error)
    b_grad = -2 * np.mean(error)
    m -= lr * m_grad
    b -= lr * b_grad

print(f"Slope: {m}, Intercept: {b}")
