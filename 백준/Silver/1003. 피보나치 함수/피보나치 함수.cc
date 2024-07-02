#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;


int getZero(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    else {
        return getZero(n - 1) + getZero(n - 2);
    }
}

int getOne(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else {
        return getOne(n - 1) + getOne(n - 2);
    }
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    vector<int> zero(41, 0);
    zero[0] = 1;
    zero[1] = 0;

    vector<int> one(41, 0);
    one[0] = 0;
    one[1] = 1;
    
    for (int i = 2; i <= 40; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }

    int T, N;
    cin >> T;
    for (int j = 0; j < T; j++) {
        cin >> N;
        cout << zero[N] << ' ' << one[N] << '\n';
    }

}