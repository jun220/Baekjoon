#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int X;
int Y;

bool isDivisor(int n) {
    //cout << n << "으로 나눴을 때 : " << "X : " << X % n << " Y : " << Y % n << endl;
    return (X % n == 0 && Y % n == 0);
}

int main() {

    cin >> X >> Y;
    //cout << "X : " << X
    //    << ", Y : " << Y << endl;
    int Min, GCD{ 1 }, LCM{ 1 };
    Min = (X < Y) ? X : Y;
    //cout << (X < Y) ? X : Y;
    for (int i = 2; i <= Min; i++) {
        if (isDivisor(i))GCD = i;
    }
    LCM = (X * Y) / GCD;
    cout << GCD << '\n' << LCM;
    return 0;
}
