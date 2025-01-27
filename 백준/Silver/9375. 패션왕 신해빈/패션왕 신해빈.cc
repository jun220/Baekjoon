#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	

	int T, N, ans;
	string clothes, type;

	cin >> T;
	while (T--) {
		unordered_map<string, int> wear;
		ans = 1;
		cin >> N;

		for (int i = 0;i < N;i++) {
			cin >> clothes >> type;
			wear[type]++;
		}

		for (pair<string, int> kv : wear) {
			ans *= kv.second + 1;
			//cout << kv.first << ": " << kv.second << '\n';
		}
		cout << ans-1 << '\n';
	}
}