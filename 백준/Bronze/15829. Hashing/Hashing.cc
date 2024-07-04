#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

template <typename T>
void print_vector(const vector<int>& v) {
	for (const T& elem: v) {
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


int check_chess(vector<vector<char>>& chess) {
	int count = 0;
	char start_letter = chess[0][0];
	cout << "start_letter : " << start_letter << '\n';
	return count;
}



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int L;
	int temp, hash{ 0 };
	string word;

	cin >> L >> word;
	for (int i = 0; i < L; i++) {
		temp = word[i] - 96;
		temp *= pow(31, i);

		hash += temp;
	}
	hash %= 1234567891;
	cout << hash;

}