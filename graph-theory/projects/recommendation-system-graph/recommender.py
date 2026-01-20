import networkx as nx

B = nx.Graph()
# Users 1,2,3 Movies A,B,C
B.add_nodes_from([1, 2, 3], bipartite=0)
B.add_nodes_from(['A', 'B', 'C'], bipartite=1)
B.add_edges_from([(1, 'A'), (1, 'B'), (2, 'A'), (3, 'B'), (3, 'C')])

# Projected Graph (Users connected if they watched same movie)
P = nx.bipartite.projected_graph(B, [1, 2, 3])
print("User Connections:", P.edges())
