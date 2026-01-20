import heapq

def prim(graph, start):
    mst = []
    visited = set([start])
    edges = [(w, start, to) for to, w in graph[start].items()]
    heapq.heapify(edges)
    
    while edges:
        w, u, v = heapq.heappop(edges)
        if v not in visited:
            visited.add(v)
            mst.append((u, v, w))
            for to, weight in graph[v].items():
                if to not in visited:
                    heapq.heappush(edges, (weight, v, to))
    return mst

print("Prim's MST Logic.")
