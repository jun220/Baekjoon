#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N- i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}


