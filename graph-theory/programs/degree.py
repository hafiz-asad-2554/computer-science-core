def get_degrees(adj_list):
    degrees = {}
    for node, neighbors in adj_list.items():
        degrees[node] = len(neighbors)
    return degrees

print("Degree Calculation logic.")
