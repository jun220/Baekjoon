#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int N) {
	if (N == 1) return false;
	if (N == 2) return true;
	for (int i = 2; i <= sqrt(N); i++) {
		if (N % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		if (isPrime(i)) cout << i << '\n';
	}
}