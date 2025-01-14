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

    vector<string> board(M, "");
    vector<vector<int>> distance(M, vector<int>(N, 0));
    
    for (int x = 0; x < M; x++) {
        cin >> board[x];
    }

    // BFS
    queue<pair<int, int>> Q;
    
    Q.push({ 0,0 });
    distance[0][0] = 1;

    int distance_to_end = 1;

    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        int dist = distance[cur.X][cur.Y] + 1;
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if (distance[nx][ny] != 0) continue; // 거리가 0일 경우만 아직 확인하지 않은 노드. 이외의 값일 경우 이미 체크했다는 뜻
            if (board[nx][ny] != '1') continue; // 1인 칸이 아니면 검사할 필요 자체가 없음


            Q.push({ nx, ny });
            distance[nx][ny] = dist;

            if (nx == M - 1 && ny == N - 1) {
                //cout << "미로의 끝에 도착!\n";
                distance_to_end = dist;
            }
        }
    }
    
    //for (int x = 0; x < M; x++) {
    //    for (int y = 0; y < N; y++) {
    //        cout << distance[x][y] << ' ';
    //    }
    //    cout << '\n';
    //}
    cout << distance_to_end;
    
    



}