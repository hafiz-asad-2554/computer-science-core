import networkx as nx

G = nx.grid_2d_graph(5, 5) # 5x5 Grid
start = (0, 0)
end = (4, 4)

path = nx.shortest_path(G, start, end)
print(f"Shortest Path from {start} to {end}: {path}")
