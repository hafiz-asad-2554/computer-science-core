def dfs(graph, start, visited=None):
    if visited is None: visited = set()
    visited.add(start)
    print(start, end=' ')
    for next in graph.get(start, []):
        if next not in visited:
            dfs(graph, next, visited)

graph = {0: [1, 2], 1: [2], 2: [0, 3], 3: [3]}
dfs(graph, 2)
