#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

bool checkBrace(string expression) {
	stack<char> braceStack;
	for (char c : expression) {
		if (c == ')') {
			if (braceStack.empty()) return false;
			braceStack.pop();
		}
		else {
			braceStack.push(c);
		}
	}
	if (braceStack.empty()) return true;
	else return false;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;
	string expression;
	while (T--) {
		cin >> expression;
		if (checkBrace(expression)) cout << "YES\n";
		else cout << "NO\n";
	}
	

	
	return 0;
}

