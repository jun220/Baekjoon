#include <iostream>
#include <vector>
#include <string>
using namespace std;

string fizzBuzz(int i) {
	if (i % 3 == 0) {
		if (i % 5 == 0) return "FizzBuzz";
		else return "Fizz";
	}
	if (i % 5 == 0) return "Buzz";
	else return to_string(i);
}

bool isInteger(string s) {
	try {
		int n = stoi(s);
		return true;
	}
	catch (const exception& e) {
		return false;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	int target;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		if (isInteger(s)) {
			//cout << "수 발견 : " << s << '\n';
			target = stoi(s) + (3 - i);
		}
		
		
	}
	cout << fizzBuzz(target);


	
	return 0;
}

