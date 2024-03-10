#include <iostream>
#include <vector>
using namespace std;



int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, X, temp;

    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp < X) cout << temp << ' ';
    }

    return 0;
}