#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int M, N;
    cin >> M >> N;
    
    vector<vector<int>> v(M, vector<int>(N, 0));
    vector<vector<bool>> visited(M, vector<bool>(N, false));

    

    for (int x = 0; x < M; x++) {
        for (int y = 0; y < N; y++) {
            cin >> v[x][y];
        }
    }

    int max_size = 0; // 그림 크기의 최대값
    int num = 0; // 그림의 수

    for (int x = 0; x < M; x++) {
        for (int y = 0; y < N; y++) {
            // 그림 BFS 탐색의 시작점이 될 수 있는지 확인
            if (visited[x][y]) continue;
            if (v[x][y] != 1) continue;

            // 조건을 확인했다면 탐색 준비, 그림의 수 증가
            num++;
            int area = 0; // 현재 그림의 넓이

            queue<pair<int, int>> Q;

            // 첫번째 칸 방문처리
            visited[x][y] = true;
            Q.push({ x, y });


            while (!Q.empty()) {
                area++;
                pair<int, int> cur = Q.front(); Q.pop();

                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                    if (visited[nx][ny]) continue;

                    if (v[nx][ny] == 1) {
                        visited[nx][ny] = true;
                        Q.push({ nx, ny });
                    }

                }

            }
            max_size = max(max_size, area);
            //cout << "area: " << area << '\n';
        }
    }

    cout << num << '\n' << max_size;
    

    
    
    
    



}