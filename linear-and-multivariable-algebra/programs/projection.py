import numpy as np

def projection(u, v):
    # Proj of u onto v
    factor = np.dot(u, v) / np.dot(v, v)
    return factor * v

u = np.array([2, 1])
v = np.array([-3, 4])
print(projection(u, v))
