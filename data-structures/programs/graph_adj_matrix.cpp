#include <iostream>
using namespace std;

int vertArr[20][20]; // adjacency matrix
int count = 0;

void displayMatrix(int v) {
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v) {
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}

int main() {
    int v = 5; // 5 vertices
    add_edge(0, 1);
    add_edge(0, 4);
    add_edge(1, 2);
    
    displayMatrix(v);
    return 0;
}
