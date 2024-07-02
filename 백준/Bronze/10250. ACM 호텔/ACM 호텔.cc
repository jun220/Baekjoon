#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

void get_room(int H, int W, int N) {
	int X = 1;
	int Y = 1;

	X = N % H == 0 ? H : N % H;
	Y = (N - 1) / H + 1;

	cout << X;
	if (Y < 10) {
		cout << 0 << Y;
	}
	else {
		cout << Y;
	}
	cout << '\n';

}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, H, W, N;

	cin >> T;

	for (int j = 0; j < T; j++) {
		cin >> H >> W >> N;
		get_room(H, W, N);
	}
}