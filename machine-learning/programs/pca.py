import numpy as np

def pca(X, num_components):
    # 1. Subtract mean
    X_meaned = X - np.mean(X, axis=0)
    # 2. Covariance matrix
    cov_mat = np.cov(X_meaned, rowvar=False)
    # 3. Eigenvalues/vectors
    eigen_values, eigen_vectors = np.linalg.eigh(cov_mat)
    # 4. Sort
    sorted_index = np.argsort(eigen_values)[::-1]
    sorted_eigenvectors = eigen_vectors[:, sorted_index]
    # 5. Subset
    eigenvector_subset = sorted_eigenvectors[:, 0:num_components]
    # 6. Transform
    X_reduced = np.dot(eigenvector_subset.transpose(), X_meaned.transpose()).transpose()
    return X_reduced

np.random.seed(1)
X = np.random.randint(10, 50, (10, 5)) 
print(pca(X, 2))
