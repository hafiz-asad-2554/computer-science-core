class DiGraph:
    def __init__(self):
        self.adj = {}
    
    def add_edge(self, u, v):
        if u not in self.adj: self.adj[u] = []
        self.adj[u].append(v)
        
print("Directed Graph: Edges go one way.")
