#include <iostream>
#include <vector>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;
    cin >> N >> K;

    vector<int> coins(N);

    for (int i = 0; i < N; i++) {
        cin >> coins[i];
    }

    int cnt{ 0 };

    for (int i = N - 1; i >= 0;i--) {
        int cur = coins[i];
        if (K >= cur) {
            int num = K / cur;
            cnt += num;
            K %= cur;
        }
    }
    cout << cnt;

}