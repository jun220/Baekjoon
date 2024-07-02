#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int calculate_score(string& answer) {
	int score = 0;
	int combo = 0;
	for (char n : answer) {
		if (n == 'O') {
			combo++;
			score += combo;
		}
		else {
			combo = 0;
		}
	}

	return score;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string answer;
		cin >> answer;

		cout << calculate_score(answer) << '\n';
	}

}