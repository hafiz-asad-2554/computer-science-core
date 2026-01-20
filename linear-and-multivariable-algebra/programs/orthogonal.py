import numpy as np

u = np.array([1, 0])
v = np.array([0, 1])

if np.dot(u, v) == 0:
    print("Vectors are orthogonal")
