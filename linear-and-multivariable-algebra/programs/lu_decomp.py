import numpy as np
from scipy.linalg import lu

A = np.array([[2, 4], [1, 3]])
P, L, U = lu(A)
print("L:\n", L)
print("U:\n", U)
