#include <iostream>
#include <queue>
using namespace std;

vector<vector<int>> v;
vector<vector<bool>> visited;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int BFS(int x, int y) {
    int extent = 0;
    visited[x][y] = true;

    queue<pair<int, int>> Q;
    Q.push({ x, y });

    while (!Q.empty()) {
        pair<int, int> node = Q.front();
        Q.pop();
        extent++;

        for (int i = 0; i < 4; i++) {
            int nx = node.X + dx[i];
            int ny = node.Y + dy[i];

            // 범위 안에 없으면 스킵
            if (nx < 0 || nx >= visited.size() || ny < 0 || ny >= visited[0].size()) continue;

            // 이미 방문했으면 스킵
            if (visited[nx][ny] == true) continue;

            if (v[nx][ny] == 1) {
                // 방문처리
                visited[nx][ny] = true;

                Q.push({ nx, ny });
            }
        }
    }
    return extent;
}






int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    

    v = vector<vector<int>>(N, vector<int>(M));
    visited = vector<vector<bool>>(N, vector<bool>(M, false));

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < M; y++) {
            cin >> v[x][y];
        }
    }

    int paint_num{ 0 };
    int max_extent{ 0 };



    for (int x = 0; x < N; x++) {
        for (int y = 0; y < M; y++) {
            if (visited[x][y]) continue;
            if (v[x][y] == 0) continue;
            paint_num++;
            int extent = BFS(x, y);
            if (extent > max_extent) max_extent = extent;

        }
    }

    cout << paint_num << '\n' << max_extent;
}