#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

vector<vector<int>> V;
vector<vector<int>> dist;

int calculateMaxDistance() {
    int max_distance = 0;
    int N = V.size();
    int M = V[0].size();

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < M; y++) {
            if (V[x][y] == 0) {
                return -1;
            }
            if (V[x][y] == -1) continue;
            
            int distance = dist[x][y];
            if (distance > max_distance) {
                max_distance = distance;
            }
        }
    }

    return max_distance;
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;
    V = vector<vector<int>>(N, vector<int>(M));
    dist = vector<vector<int>>(N, vector<int>(M, -1));

    queue<pair<int, int>> Q;

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < M; y++) {
            int n;
            cin >> n;
            V[x][y] = n;
            if (n == 1) {
                Q.push({ x, y });
                dist[x][y] = 0;
            }

        }
    }

    while (!Q.empty()) {
        auto node = Q.front();
        int distance = dist[node.X][node.Y];
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = node.X + dx[i];
            int ny = node.Y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (V[nx][ny] != 0) continue;
            if (dist[nx][ny] != -1) continue;

            dist[nx][ny] = distance + 1;
            V[nx][ny] = 1;
            Q.push({ nx, ny });
        }
    }

    int max_distance = calculateMaxDistance();
    cout << max_distance;

    


}