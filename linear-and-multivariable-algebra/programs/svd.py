import numpy as np

A = np.array([[1, 2], [3, 4], [5, 6]])
U, S, VT = np.linalg.svd(A)

print("U:\n", U)
print("S:", S)
print("VT:\n", VT)
