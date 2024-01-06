#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K, result{ 1 };
    cin >> N >> K;
    
    for (int i = 0; i < K; i++) {
        result *= (N - i);
    }
    for (int i = 1; i <= K; i++) {
        result /= i;
    }
    cout << result;


    return 0;
}