def find(parent, i):
    if parent[i] == i: return i
    return find(parent, parent[i])

def union(parent, rank, x, y):
    root_x = find(parent, x)
    root_y = find(parent, y)
    if rank[root_x] < rank[root_y]: parent[root_x] = root_y
    elif rank[root_x] > rank[root_y]: parent[root_y] = root_x
    else:
        parent[root_y] = root_x
        rank[root_x] += 1

print("Kruskal's MST Logic.")
