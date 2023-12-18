#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, no;
    double sum = 0;
    vector<int> v;

    cin >> N;
    if (N == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    no = round(N * 0.15);
    if (N - 2 * no <= 0) {
        no = 0;
    }

    for (int i = no; i < N - no; i++) {
        sum += v[i];
    }
    cout << round(sum / max(1, N - 2 * no));
}
