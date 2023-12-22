#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <forward_list>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string temp = s;
    reverse(s.begin(), s.end());
    return temp == s;
}

int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상을 위해
    cin.tie(NULL);

    string s;
    while (cin >> s) {
        if (s == "0") break;
        if (isPalindrome(s)) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
