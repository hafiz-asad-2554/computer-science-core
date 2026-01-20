class WeightedGraph:
    def __init__(self):
        self.adjList = {}
        
    def add_edge(self, u, v, w):
        if u not in self.adjList: self.adjList[u] = []
        self.adjList[u].append((v, w))
        
print("Weighted Graph Implementation.")
