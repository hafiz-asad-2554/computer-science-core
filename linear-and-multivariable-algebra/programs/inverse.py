import numpy as np

A = np.array([[1, 2], [3, 4]])
try:
    inv = np.linalg.inv(A)
    print(f"Inverse of A:\n{inv}")
except np.linalg.LinAlgError:
    print("Matrix is singular")
