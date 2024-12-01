#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

int calculateZ(int N, int r, int c) {
    //cout << "N: " << N << ", r: " << r << ", c: " << c << '\n';
    if (N == 0) return 0;
    // half는 한 변의 반. 즉 2의 N-1 제곱이다
    int half = 1 << (N - 1);
    //cout << "half: " << half << '\n';

    // 0
    if (r < half && c < half) {
        //cout << "보정값 없음\n";
        return calculateZ(N - 1, r, c);
    }
    // 1
    else if (r < half && c >= half) {
        //cout << "보정값: " << half*half << '\n';
        return half * half + calculateZ(N - 1, r, c - half);
    }
    // 2
    else if (r >= half && c < half) {
        //cout << "보정값: " << half * half * 2 << '\n';
        return 2 * half * half + calculateZ(N - 1, r - half, c);
    }
    // 3
    else if (r >= half && c >= half) {
        //cout << "보정값: " << half * half * 3 << '\n';
        return 3 * half * half + calculateZ(N - 1, r - half, c - half);
    }

    // N이 2일때 생각
    // (0,0) 칸까지의 거리 : 0
    // (0,2) 칸까지의 거리 : 4
    // (2,0) 칸까지의 거리 : 8
    // (2,2) 칸까지의 거리 : 12

   // 결국 계산해야 할거: 이 2x2 칸에 오는데까지 걸린 거리
   // 더하기 이 2x2 칸 내부에서 위치
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, r, c;
    cin >> N >> r >> c;
    cout << calculateZ(N, r, c);


}