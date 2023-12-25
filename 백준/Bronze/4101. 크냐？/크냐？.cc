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

    int A, B;
    while (true) {
        cin >> A >> B;
        if (A == 0 && B == 0) break;
        if (A > B) cout << "Yes\n";
        else cout << "No\n";
    }



    return 0;
}
