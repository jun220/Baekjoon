#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

#define MOD 10007

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int base[] = { 0, 1, 3 };

	int N;
	cin >> N;

	if (N < 3) {
		cout << base[N];
		return 0;
	}

	vector<long long>dp(N + 1);


	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3;i <= N;i++) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD;
	}
	cout << dp[N];
}