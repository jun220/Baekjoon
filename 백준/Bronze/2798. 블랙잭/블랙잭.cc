#include <iostream>
#include <vector>
#include <string>
using namespace std;

int calculate(int& M, vector<int>& numbers) {
	int n = numbers.size();
	int Min{ 2147483647 };
	int gp;

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				gp = M - (numbers[i] + numbers[j] + numbers[k]);
				if (gp < 0) continue;
				if (gp < Min) {
					Min = gp;
				}
			}
		}
	}
	return Min;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> numbers;
	int N, M, temp, gap;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		numbers.push_back(temp);

	}

	cout << M - calculate(M, numbers);
}