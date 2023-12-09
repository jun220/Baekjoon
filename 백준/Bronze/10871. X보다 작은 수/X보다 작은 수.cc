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

    int N, X, temp;
    vector<int> v;
    cin >> N >> X;
    
    for (int i = 0; i < N; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    for (int n : v) {
        if (n < X) cout << n << " ";
    }
    return 0;
}
