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
    int N, temp, Max{ 0 };
    double sum{0};
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (Max < temp) Max = temp;
        v.push_back(temp);
    }

    for (int i = 0; i < N; i++) {
        sum += v[i];
    }
    sum *= 100;
    sum /= N;
    cout << sum / Max;

    return 0;
}
