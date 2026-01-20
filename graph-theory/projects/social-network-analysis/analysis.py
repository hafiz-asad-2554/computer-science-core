import networkx as nx

G = nx.Graph()
G.add_edges_from([(1, 2), (1, 3), (2, 4), (3, 4)])

print("Degree Centrality:", nx.degree_centrality(G))
print("Closeness Centrality:", nx.closeness_centrality(G))
