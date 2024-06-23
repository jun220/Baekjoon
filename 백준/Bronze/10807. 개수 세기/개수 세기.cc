#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, V, count{ 0 };
    cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    cin >> V;

    for (int n : v) {
        if (n == V) count++;
    }
    cout << count;
    return 0;
}
