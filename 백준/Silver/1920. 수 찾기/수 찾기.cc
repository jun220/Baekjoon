#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, temp;
    vector<int> v1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        v1.push_back(temp);
    }

    sort(v1.begin(), v1.end());

    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> temp;
        if (binary_search(v1.begin(), v1.end(), temp))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }


    return 0;
}