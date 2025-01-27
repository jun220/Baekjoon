#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	int base[] = {0, 1, 1, 1, 2, 2};
	while (T--) {
		int N;
		cin >> N;

		if (N <= 5) {
			cout << base[N] << '\n';
			continue;
		}

		vector<long long> dp(N + 1);

		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;
		dp[4] = 2;
		dp[5] = 2;

		for (int i = 6;i <= N;i++) {
			dp[i] = dp[i - 1] + dp[i - 5];
		}

		cout << dp[N] << '\n';
	}

}