#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <vector>
using namespace std;

#define ll long long

ll func2(ll a, ll b, ll m) {
    ll val = 1;
    if (b == 0) return 1;
    if (b % 2 == 0) {
        ll result = func2(a, b / 2, m) % m;
        return result * result % m;
    }
    else {
        return a * func2(a, b - 1, m) % m;
    }
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;

    cout << func2(a, b, c);

}