from collections import Counter
import math

def euclidean_distance(p1, p2):
    return math.sqrt(sum((x - y) ** 2 for x, y in zip(p1, p2)))

def knn(data, query, k):
    distances = []
    for point in data:
        dist = euclidean_distance(point[:-1], query)
        distances.append((dist, point[-1])) # (dist, label)
    
    distances.sort()
    k_nearest = distances[:k]
    labels = [label for _, label in k_nearest]
    return Counter(labels).most_common(1)[0][0]

data = [[1, 2, 'A'], [2, 3, 'A'], [5, 5, 'B']]
print(knn(data, [4, 4], 1))
