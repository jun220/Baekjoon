#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    int A, B, C;

    cin >> A >> B >> C;
    cout << B / A * C * 3;
}