class Graph:
    def __init__(self, size):
        self.adjMatrix = [[0] * size for _ in range(size)]
        self.size = size

    def add_edge(self, v1, v2):
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1

    def print_matrix(self):
        for row in self.adjMatrix:
            print(row)

g = Graph(4)
g.add_edge(0, 1)
g.add_edge(0, 2)
g.print_matrix()
