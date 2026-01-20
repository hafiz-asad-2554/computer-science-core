import random

def kmeans(data, k):
    centroids = random.sample(data, k)
    
    for _ in range(10): # Iterations
        clusters = [[] for _ in range(k)]
        for point in data:
            dists = [abs(point - c) for c in centroids]
            cluster_idx = dists.index(min(dists))
            clusters[cluster_idx].append(point)
            
        # Update centroids
        for i in range(k):
            if clusters[i]:
                centroids[i] = sum(clusters[i]) / len(clusters[i])
                
    return centroids

data = [1, 2, 3, 10, 11, 12]
print("Centroids:", kmeans(data, 2))
