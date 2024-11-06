#include <iostream>
#include <queue>
using namespace std;

vector<vector<int>> v;
vector<vector<bool>> visited;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };







int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    //vector<vector<int>> maze(N, vector<int>(M));
    vector<vector<int>> maze;

    string maze_string;

    for (int x = 0; x < N; x++) {
        vector<int> temp;
        cin >> maze_string;
        for (char c : maze_string) {
            //cout << "c: " << c << '\n';
            if (c == '1') temp.push_back(1);
            else temp.push_back(0);
        }
        //cout << "temp: ";
        //for (int n : temp) cout << n;
        //cout << '\n';
        maze.push_back(temp);
        //maze[N] = temp;
    }

    //for (int x = 0; x < N; x++) {
    //    for (int y = 0; y < M; y++) {
    //        cout << maze[x][y] << ' ';
    //    }
    //    cout << '\n';
    //}

    // 목표위치 : maze[x-1][y-1]

    vector<vector<int>> distance(N, vector<int>(M, -1));
    queue<pair<int, int>> Q;

    distance[0][0] = 0;
    Q.push({ 0, 0 });
    
    int dist = 0;

    while (!Q.empty()) {
        pair<int, int> node = Q.front();
        Q.pop();
        //cout << "node : (" << node.X << ',' << node.Y
        //    << "), dist : " << dist << '\n';
        dist = distance[node.X][node.Y];


        for (int i = 0; i < 4; i++) {
            int nx = node.X + dx[i];
            int ny = node.Y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
                //cout << "범위를 벗어났습니다\n";
                continue;
            }
            if (distance[nx][ny] != -1) {
                //cout << "여긴 이미 거리 처리가 되어있네요\n";
                continue;
            }
            if (maze[nx][ny] == 0) {
                //cout << "거긴 벽입니다\n";
                continue;
            }

            distance[nx][ny] = dist + 1;
            Q.push({ nx, ny });
        }
    }

    //for (int x = 0; x < N; x++) {
    //    for (int y = 0; y < M; y++) {
    //        cout << distance[x][y] << ' ';
    //    }
    //    cout << '\n';
    //}

    cout << distance[N - 1][M - 1] + 1;


}