import numpy as np

def pagerank(M, num_iterations=100, d=0.85):
    N = M.shape[1]
    v = np.random.rand(N, 1)
    v = v / np.linalg.norm(v, 1)
    M_hat = (d * M) + (((1 - d) / N) * np.ones((N, N)))
    for i in range(num_iterations):
        v = M_hat @ v
    return v

print("PageRank Logic.")
