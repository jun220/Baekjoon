#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int MAX(int n1, int n2, int n3) {
    int max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    return max;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 == n2 && n2 == n3) {
        cout << 10000 + n1 * 1000;
    }
    else if (n1 == n2) {
        cout << 1000 + n1 * 100;
    }
    else if (n2 == n3) {
        cout << 1000 + n2 * 100;
    }
    else if (n3 == n1) {
        cout << 1000 + n3 * 100;
    }
    else 
        cout << MAX(n1, n2, n3) * 100;
    
    return 0;
}


