#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool checkAscending(vector<int>& ring) {
	for (int i = 0; i < 8; i++) {
		if (ring[i] != i + 1) return false;
	}
	return true;
}

bool checkDescending(vector<int>& ring) {
	for (int i = 0; i < 8; i++) {
		if (ring[i] != (8 - i)) return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> ring = vector<int>(8);
	for (int i = 0; i < 8; i++) {
		cin >> ring[i];
	}

	if (ring[0] == 1) {
		if (checkAscending(ring)) cout << "ascending";
		else cout << "mixed";
	}
	else if (ring[0] == 8) {
		if (checkDescending(ring)) cout << "descending";
		else cout << "mixed";
	}
	else {
		cout << "mixed";
	}
	
}