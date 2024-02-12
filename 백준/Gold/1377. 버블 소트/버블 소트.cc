#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N, result{0}, dist;
	cin >> N;
	//원본 데이터의 값과 원래 인덱스 저장
	vector<pair<int, int>> A(N);
	

	for (int i = 0; i < N; i++) {
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++) {
		dist = A[i].second - i;
		if (dist > result) result = dist;
	}
	cout << ++result;
	return 0;
}   