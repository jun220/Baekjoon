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

			if (braceStack.top() == '(')
				braceStack.pop();
			else
				return false;
		}
		if (c == '}') {
			if (braceStack.empty()) return false;

			if (braceStack.top() == '{')
				braceStack.pop();
			else
				return false;
		}
		if (c == ']') {
			if (braceStack.empty()) return false;

			if (braceStack.top() == '[')
				braceStack.pop();
			else
				return false;
		}
		else {
			if (c == '(' || c == '{' || c == '[') {
				//cout << "여는 괄호가 나왔으므로 push할게요";
				braceStack.push(c);
			}
				
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

	string expression;
	while (true) {
		getline(cin, expression);
		if (expression == ".") break;
		if (checkBrace(expression)) cout << "yes\n";
		else cout << "no\n";
	}
	

	
	return 0;
}

