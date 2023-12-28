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
    cout << (A + B) % C << '\n';
    cout << ((A % C) + (B % C)) % C << '\n';
    cout << (A * B) % C << '\n';
    cout << ((A % C) * (B % C)) % C;
    return 0;
}
