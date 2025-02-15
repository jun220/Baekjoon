#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N;

//int isUsed[10];
//int arr[10];
//int isUsedRow[16];
int column[16];
int isUsedCol[16];

// 좌상단 시작
int isUsedDiag1[32];
// 우상단 시작
int isUsedDiag2[32];

int ans = 0;

void backTrack(int row) {
    if (row == N) {
        //for (int i = 0; i < N; i++) {
        //    cout << column[i] << ' ';
        //}
        //cout << '\n';
        ans++;
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isUsedCol[col]) continue;

        int diag1 = row + col;
        int diag2 = row - col + N;
        
        if (isUsedDiag1[diag1] || isUsedDiag2[diag2]) continue;


        column[row] = col;
        isUsedCol[col] = true;
        isUsedDiag1[diag1] = true;
        isUsedDiag2[diag2] = true;
        
        backTrack(row + 1);
        isUsedCol[col] = false;
        isUsedDiag1[diag1] = false;
        isUsedDiag2[diag2] = false;
    }

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    backTrack(0);
    cout << ans;
    
}