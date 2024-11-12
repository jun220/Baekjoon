#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Tomato {
    int x;
    int y;
    int z;
};

int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N, H;
    cin >> M >> N >> H;

    vector<vector<vector<int>>> v(H, vector<vector<int>>(N, vector<int>(M, 0)));

    bool isAllRiped = true;
    queue<Tomato> Q;

    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                cin >> v[z][y][x];
                if (v[z][y][x] == 1) {
                    Q.push({x, y, z});
                }
                if (v[z][y][x] == 0) {
                    isAllRiped = false;  // 익지 않은 토마토가 하나라도 있으면 false
                }
            }
        }
    }

    if (isAllRiped) {  // 처음부터 모두 익어있는 경우
        cout << 0;
        return 0;
    }

    while (!Q.empty()) {
        Tomato t = Q.front();
        int dist = v[t.z][t.y][t.x];
        Q.pop();

        for (int i = 0; i < 6; i++) {
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            int nz = t.z + dz[i];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H) continue;
            if (v[nz][ny][nx] != 0) continue;  // 익지 않은 토마토(0)만 탐색

            v[nz][ny][nx] = dist + 1;
            Q.push({nx, ny, nz});
        }
    }

    int maxDays = 0;
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (v[z][y][x] == 0) {  // 익지 않은 토마토가 남아있다면 -1 출력
                    cout << -1;
                    return 0;
                }
                maxDays = max(maxDays, v[z][y][x]);
            }
        }
    }

    cout << maxDays - 1;  // 익는 일수를 계산하기 위해 -1
}
