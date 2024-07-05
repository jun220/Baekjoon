#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	while (true) {
		cin >> N;
		if (N == 0) break;
		else {
			cout << N * (N + 1) / 2 << '\n';
		}
	}

}