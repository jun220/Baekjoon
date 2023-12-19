#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N, temp, count{ 0 };
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (isPrime(temp)) count++;
    }
    cout << count;

    return 0;
}
