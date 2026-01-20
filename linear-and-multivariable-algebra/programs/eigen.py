import numpy as np

A = np.array([[1, 2], [2, 1]])
w, v = np.linalg.eig(A)

print("Eigenvalues:", w)
print("Eigenvectors:\n", v)
