import numpy as np

def rotate_z(theta):
    c, s = np.cos(theta), np.sin(theta)
    return np.array([[c, -s, 0], [s, c, 0], [0, 0, 1]])

point = np.array([1, 0, 0])
rotated = np.dot(rotate_z(np.pi/2), point)
print(rotated)
