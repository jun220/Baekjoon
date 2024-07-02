#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	set<int> remainders;
	int number;

	for (int i = 0; i < 10; i++) {
		cin >> number;
		remainders.insert(number % 42);
	}
	
	cout << remainders.size() << endl;
}