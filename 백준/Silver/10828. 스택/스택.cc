#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    int n, x;
    cin >> n;
    string order;
    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == "push") {
            cin >> x;
            s.push(x);
        }
        else if (order == "top") {
            if (s.empty()) cout << "-1\n";
            else cout << s.top() << '\n';
        }
        else if (order == "pop") {
            if (s.empty()) cout << "-1\n";
            else {
                cout << s.top() << '\n';
                s.pop();
            }

        }
        else if (order == "size") {
            cout << s.size() << '\n';
        }
        else if (order == "empty") {
            if (s.empty()) cout << 1;
            else cout << 0;

            cout << '\n';
        }
    }
}