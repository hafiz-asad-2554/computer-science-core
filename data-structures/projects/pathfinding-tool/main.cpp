#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define N 4
#define M 4

struct Point {
    int x, y, dist;
};

int row[] = { -1, 0, 0, 1 };
int col[] = { 0, -1, 1, 0 };

bool isValid(int mat[N][M], bool visited[N][M], int row, int col) {
    return (row >= 0) && (row < N) && (col >= 0) && (col < M)
           && (mat[row][col] == 0) && (!visited[row][col]);
}

void bfs(int mat[N][M], Point src, Point dest) {
    if (mat[src.x][src.y] == 1 || mat[dest.x][dest.y] == 1)
        return;

    bool visited[N][M];
    for(int i=0; i<N; i++) for(int j=0;j<M; j++) visited[i][j] = false;

    queue<Point> q;
    src.dist = 0;
    q.push(src);
    visited[src.x][src.y] = true;

    while (!q.empty()) {
        Point curr = q.front();
        q.pop();

        if (curr.x == dest.x && curr.y == dest.y) {
            cout << "Shortest Path Length: " << curr.dist << endl;
            return;
        }

        for (int i = 0; i < 4; i++) {
            int r = curr.x + row[i];
            int c = curr.y + col[i];

            if (isValid(mat, visited, r, c)) {
                visited[r][c] = true;
                Point Adj = { r, c, curr.dist + 1 };
                q.push(Adj);
            }
        }
    }
    cout << "Path not found";
}

int main() {
    int mat[N][M] = {
        { 0, 1, 0, 0 },
        { 0, 1, 0, 1 },
        { 0, 0, 0, 0 },
        { 1, 1, 1, 0 }
    };

    Point source = { 0, 0 };
    Point dest = { 3, 3 };

    bfs(mat, source, dest);

    return 0;
}
