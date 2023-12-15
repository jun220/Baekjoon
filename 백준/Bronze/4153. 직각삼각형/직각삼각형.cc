#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


bool isTriangle(int a, int b, int c) {
    int MAX = a;
    if (b > MAX)MAX = b;
    if (c > MAX)MAX = c;
    return (a * a + b * b + c * c == 2 * MAX * MAX);
}

int main() {

    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)break;
        if (isTriangle(a, b, c))cout << "right\n";
        else cout << "wrong\n";

    }
    

    return 0;
}
