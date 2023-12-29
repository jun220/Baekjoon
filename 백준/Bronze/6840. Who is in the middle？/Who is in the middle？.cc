#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <forward_list>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상을 위해
    cin.tie(NULL);
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B) {
        if (B > C) cout << B; // A > B > C
        else {//A>B, C>B
            if (A > C) cout << C;
            else cout << A;
        }
    }
    else {
        if (A > C) cout << A;
        else { //B>A, C>A
            if (B > C)cout << C;
            else cout << B;
        }
    }
    
    return 0;
}
