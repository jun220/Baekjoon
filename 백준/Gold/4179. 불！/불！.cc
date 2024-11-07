#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

vector<vector<int>> V;
vector<vector<int>> dist;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int R, C;
    cin >> R >> C;

    vector<vector<char>> maze(R, vector<char>(C));
    vector<vector<int>> fire(R, vector<int>(C, -1));
    vector<vector<int>> jihoon(R, vector<int>(C, -1));

    queue<pair<int, int>> Q;

    //int fire_x = -1;
    //int fire_y = -1;
    
    int jihoon_x;
    int jihoon_y;

    

    for (int x = 0; x < R; x++) {
        for (int y = 0; y < C; y++) {
            char c;
            cin >> c;
            maze[x][y] = c;

            if (c == 'F') {
                Q.push({ x, y });
                fire[x][y] = 0;
            }
            if (c == 'J') {
                jihoon_x = x; jihoon_y = y;
            }
        }
    }
    


    

    while (!Q.empty()) {
        auto node = Q.front();
        int dist = fire[node.X][node.Y];
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = node.X + dx[i];
            int ny = node.Y + dy[i];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (maze[nx][ny] == '#') continue;
            if (fire[nx][ny] != -1) continue;

            fire[nx][ny] = dist + 1;
            Q.push({ nx, ny });
        }

    }

    //cout << "\n불 전파시간\n";
    //for (int x = 0; x < R; x++) {
    //    for (int y = 0; y < C; y++) {
    //        cout << fire[x][y] << ' ';
    //    }
    //    cout << '\n';
    //}

    // 지훈이 탈출에 걸리는데 필요한 시간 계산
    Q.push({ jihoon_x, jihoon_y });
    jihoon[jihoon_x][jihoon_y] = 0;

    int escape_time = -1;
    bool escaped = false;

    while (!Q.empty()) {
        if (escaped) break;
        auto node = Q.front();
        int dist = jihoon[node.X][node.Y];
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = node.X + dx[i];
            int ny = node.Y + dy[i];

            //cout << "nx,ny : " << nx << "," << ny << '\n';

            // 범위를 벗어나면 탈출
            if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
                //cout << "탈출!\n";
                escape_time = dist + 1;
                escaped = true;
                break;
            }
            // 벽이면 못감
            if (maze[nx][ny] == '#') continue;

            // 이미 검사한 노드면 제외
            if (jihoon[nx][ny] != -1) continue;
            // 이미 불이 퍼져있으면 안됨
            if (fire[nx][ny] <= dist + 1 && fire[nx][ny] != -1) continue;

            //if (nx == R - 1 || ny == C - 1) {
            //    escape_time = dist + 1;
            //}

            jihoon[nx][ny] = dist + 1;
            Q.push({ nx, ny });
        }

    }

    //cout << "\n지훈의 이동경로\n";
    //for (int x = 0; x < R; x++) {
    //    for (int y = 0; y < C; y++) {
    //        cout << jihoon[x][y] << ' ';
    //    }
    //    cout << '\n';
    //}


    if (escape_time > 0) cout << escape_time;
    else cout << "IMPOSSIBLE";


}