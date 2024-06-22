#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//void shuffle(&vector<int> num) {
//	
//}

void shuffle(vector<int>& num) {
	int temp;
	num.erase(num.begin());

	if (num.size() == 1) return;
	temp = num.front();
	num.erase(num.begin());
	num.push_back(temp);

}

void shuffle(queue<int>& num) {
	int temp;
	num.pop();
	if (num.size() == 1) return;
	num.push(num.front());
	num.pop();
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	queue<int> num;

	for (int i = 0; i < N; i++){
		num.push(i + 1);
	}

	while (num.size() > 1) {
		shuffle(num);
	}
	cout << num.front();
}