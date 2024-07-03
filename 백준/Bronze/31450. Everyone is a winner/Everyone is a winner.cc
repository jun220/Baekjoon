#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B;
	cin >> A >> B;
	if (A % B == 0) cout << "Yes";
	else cout << "No";
}