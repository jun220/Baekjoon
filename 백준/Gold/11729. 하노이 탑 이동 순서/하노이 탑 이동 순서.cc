#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int end) {
    // n개의 원판을 start에서 end로 옮기는 함수
    if (n == 1) {
        cout << start << ' ' << end << '\n';
    }
    else {
        int mid = 6 - start - end; // 중간 장대 계산
        hanoi(n - 1, start, mid); // n-1개의 원판을 중간 장대로 이동
        cout << start << ' ' << end << '\n'; // 가장 큰 원판을 목적지로 이동
        hanoi(n - 1, mid, end); // 중간 장대의 n-1 원판을 목적지로 이동
    }
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    //cout << pow(2, N) - 1 << '\n';
    cout << (1 << N) - 1 << '\n';  // 2^N - 1
    hanoi(N, 1, 3);
}