import numpy as np

def compress(matrix, k):
    U, S, VT = np.linalg.svd(matrix, full_matrices=False)
    reconst = np.dot(U[:, :k], np.dot(np.diag(S[:k]), VT[:k, :]))
    return reconst

print("Image Compression Logic using SVD.")
