import numpy as np

def gram_schmidt(vectors):
    basis = []
    for v in vectors:
        w = v - sum(np.dot(v, b) * b for b in basis)
        if (np.linalg.norm(w) > 1e-10):
            basis.append(w / np.linalg.norm(w))
    return np.array(basis)

test = [np.array([1, 1]), np.array([1, 2])]
print(gram_schmidt(test))
