#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countDivision(int n, int division) {
    int count{ 0 };
    while (n % division == 0) {
        n /= division;
        count++;
    }
    return count;
}

int factorialzero(int n) {
    int result{ 0 };
    int twoCount{ 0 }, fiveCount{ 0 };
    if (n == 0) return 0;
    for (int i = 1; i <= n; i++) {
        twoCount += countDivision(i, 2);
        fiveCount += countDivision(i, 5);
    }
    //cout << "two count : " << twoCount
    //    << "\nfive count : " << fiveCount << '\n';
    return min(twoCount, fiveCount);
}

int main() {
    int N, result{ 0 };
    string s;
    cin >> N;
    cout << factorialzero(N);
    return 0;
}
