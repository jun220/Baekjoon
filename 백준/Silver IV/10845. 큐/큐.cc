#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;

	int N;
	string command; 
	int X;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push") {
			cin >> X;
			q.push(X);
		}
		else if (command == "pop") {
			if (q.size() == 0) cout << -1;
			else {
				cout << q.front();
				q.pop();
			}
			cout << '\n';
		}
		else if (command == "size") {
			cout << q.size();
			cout << '\n';
		}
		else if (command == "empty") {
			if (q.size() == 0) cout << 1;
			else cout << 0;
			cout << '\n';
		}
		else if (command == "front") {
			if (q.size() == 0) cout << -1;
			else {
				cout << q.front();
			}
			cout << '\n';
		}
		else if (command == "back") {
			if (q.size() == 0) cout << -1;
			else {
				cout << q.back();
			}
			cout << '\n';
		}
	}

	
	return 0;
}   