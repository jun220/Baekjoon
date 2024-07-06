#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

template <typename T>
void print_vector(const vector<int>& v) {
	for (const T& elem : v) {
		cout << elem << ' ';
	}
}

template<typename T>
void print_2d_vector(const vector<vector<T>>& v) {
	for (const auto& row : v) {
		for (const T& elem : row) {
			cout << elem << ' ';
		}
		cout << '\n';
	}
}


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int temp;

	vector<vector<int>> apartment(15, vector<int>(15));
	for (int i = 1; i <= 14; i++) {
		apartment[0][i] = i;
	}

	for (int i = 1; i <= 14; i++) {
		temp = 0;
		for (int j = 1; j <= 14; j++) {
			temp += apartment[i-1][j];
			apartment[i][j] = temp;
		}
	}
	//print_2d_vector(apartment);
	int T, k, n;
	cin >> T;
	for (int j = 0; j < T; j++) {
		cin >> k >> n;
		cout << apartment[k][n] << '\n';
	}

}