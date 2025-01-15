#include <iostream>
#include <stack>
using namespace std;


long long func2(int a, int b, int m) {
    if (b == 0) return 1;

    if (b % 2 == 0) {
        long long temp = func2(a, b / 2, m);
        return temp * temp % m;
    }
    else {
        return a * func2(a, b - 1, m) % m;
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    cout << func2(a, b, c);
}