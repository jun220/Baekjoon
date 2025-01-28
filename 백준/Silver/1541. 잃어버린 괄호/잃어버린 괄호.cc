#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct node {
	int index;
	vector<node*> connected;
};

bool isOperator(char c) {
	if (c == '+' || c == '-') return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string expression;
	bool isMinus = false;
	int num = 0;
	int sum = 0;

	int ans = 0;
	cin >> expression;
	for (char c : expression) {
		if (isOperator(c)) {
			if (c == '+') {
				sum += num;
			}
			// - 기호 나왔을 경우
			else {
				sum += num;
				ans += (isMinus) ? -sum : sum;
				sum = 0;

				isMinus = true;
			}
			num = 0;
		}
		else {
			num = num * 10 + (c - '0');
		}
	}
	sum += num;
	//cout << "현재 sum: " << sum << '\n';
	//cout << "현재 isMinus 상태: " << isMinus << '\n';
	ans += (isMinus) ? -sum : sum;
	cout << ans;
}