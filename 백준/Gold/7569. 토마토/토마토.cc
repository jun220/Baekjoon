#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Tomato {
    int x;
    int y;
    int z;
    //int count;
};

int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = { 0, 0, 1, -1, 0, 0 };
int dz[] = { 0, 0, 0, 0, 1, -1 };


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N, H;
    cin >> M >> N >> H;

    vector<vector<vector<int>>> 
        v(H, vector<vector<int>>(N, vector<int>(M, 0)));

    bool isAllRiped = true;

    //vector<vector<vector<bool>>>
    //    visited(H, vector<vector<bool>>(N, vector<bool>(M, 0)));

    int temp;
    queue<Tomato> Q;
    //cout << "이제 토마토를 입력받겠습니다\n";
    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                cin >> temp;
                if (temp == 1) Q.push({ x,y,z });
                if (temp == 0) isAllRiped = false;
                //cout << "(" << z << ',' << y << ',' << x << ")\n";
                v[z][y][x] = temp;
            }
        }
    }

    if (isAllRiped) {
        cout << 0;
        return 0;
    }

    while (!Q.empty()) {
        Tomato t = Q.front();
        int dist = v[t.z][t.y][t.x];
        Q.pop();
        /*cout << "tomato : " << t->x
            << ',' << t->y
            << ',' << t->z << '\n';*/

        for (int i = 0; i < 6; i++) {
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            int nz = t.z + dz[i];

            // x,y,z의 범위 체크
            if (nx < 0 || nx >= M) continue;
            if (ny < 0 || ny >= N) continue;
            if (nz < 0 || nz >= H) continue;

            // 이미 익은 토마토이거나 비어 있는 칸이면 건너뛰기
            if (v[nz][ny][nx] != 0) continue;
            
            v[nz][ny][nx] = dist + 1;

            Q.push({nx, ny, nz});
        }
    }

    //cout << "이제 출력합니다";

    int max = 0;
    bool isClear = true;

    for (int z = 0; z < H; z++) {
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                int dist = v[z][y][x];
                if (dist == 0) {
                    cout << -1;
                    return 0;
                }
                if(dist > max) max = dist;
                //cout << dist << ' ';
            }
            //cout << '\n';
        }
    }

    cout << max-1;

}