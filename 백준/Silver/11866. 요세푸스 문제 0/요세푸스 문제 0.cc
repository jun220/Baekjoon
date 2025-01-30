#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;
    
    queue<int> Q;
    for (int i = 0; i < N; i++) {
        Q.push(i+1);
    }

    int cur;
    cout << '<';
    while (!Q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            cur = Q.front();
            Q.push(cur);
            Q.pop();
        }
        cout << Q.front();
        Q.pop();
        if (!Q.empty()) cout << ", ";
    }
    cout << '>';

}