class Graph:
    def __init__(self):
        self.adjList = {}

    def add_edge(self, u, v):
        if u not in self.adjList: self.adjList[u] = []
        if v not in self.adjList: self.adjList[v] = []
        self.adjList[u].append(v)
        self.adjList[v].append(u)

    def print_list(self):
        for node, neighbors in self.adjList.items():
            print(f"{node} -> {neighbors}")

g = Graph()
g.add_edge(1, 2)
g.add_edge(1, 3)
g.print_list()
