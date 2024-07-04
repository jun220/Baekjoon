#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, T, P, max{ 0 };
	vector<int> size(6);
	cin >> N;
	for (int i = 0; i < 6; i++) {
		cin >> size[i];
	}

	int shirts{ 0 };
	cin >> T >> P;
	for (int i = 0; i < 6; i++) {
		if (size[i] % T == 0) shirts += size[i] / T;
		else shirts += size[i] / T + 1;
	}
	cout << shirts << '\n';
	cout << N / P << ' ' << N % P;

	//cin >> T >> P;

	//for(int i=0;i<)

}