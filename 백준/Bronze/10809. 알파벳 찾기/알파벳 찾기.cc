#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> alphabet = vector<int>(26, -1);

	string S;
	cin >> S;

	for (int i = 0; i < S.length(); i++) {
		int letter = S[i] - 97;
		if (alphabet[letter] == -1) alphabet[letter] = i;
	}


	for (int n : alphabet) {
		cout << n << ' ';
	}
}