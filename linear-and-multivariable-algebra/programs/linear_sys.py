import numpy as np

# 2x + 3y = 8
# 1x - 2y = -3
A = np.array([[2, 3], [1, -2]])
b = np.array([8, -3])

x = np.linalg.solve(A, b)
print(f"Solution: {x}")
