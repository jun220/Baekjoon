#include <iostream>
#include <list>
#include <queue>
using namespace std;

int A[1000005];
int B[1000005];
int C[2000005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);



    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    int aIdx = 0;
    int bIdx = 0;
    
    for (int i = 0; i < M + N; i++) {
        if (aIdx == N) {
            C[i] = B[bIdx];
            bIdx++;
            continue;
        }
        if (bIdx == M) {
            C[i] = A[aIdx];
            aIdx++;
            continue;
        }
        
        int aValue = A[aIdx];
        int bValue = B[bIdx];

        if (aValue <= bValue) {
            C[i] = A[aIdx];
            aIdx++;
        }
        else {
            C[i] = B[bIdx];
            bIdx++;
        }
    }

    for (int i = 0; i < M + N; i++) {
        cout << C[i] << ' ';
    }

}