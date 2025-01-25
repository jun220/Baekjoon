#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int X;
    cin >> X;

    if (X == 1) {
        cout << 0;
        return 0;
    }

    vector<int> dp(X+1);
    
    // 초기값
    dp[1] = 0;
    //dp[2] = 1;



    for (int i = 2; i <= X; i++) {
        int temp = dp[i - 1];
        if (i % 2 == 0) {
            int a = dp[i / 2];
            temp = min(temp, a);
        }
        if (i % 3 == 0) {
            int b = dp[i / 3];
            temp = min(temp, b);
        }
        dp[i] = temp + 1;

    }
    cout << dp[X];
    

}