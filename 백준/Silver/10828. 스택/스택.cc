#include <iostream>
#include <stack>
using namespace std;



int main(void) {
    stack<int> S;

    int N;
    cin >> N;

    string order;
    int X;
    for (int i = 0; i < N; i++) {
        cin >> order;
        if (order == "push") {
            cin >> X;
            S.push(X);
        }
        else if (order == "pop") {
            if (S.empty()) cout << "-1\n";
            else {
                cout << S.top() << '\n';
                S.pop();
            }

        }
        else if (order == "size") {
            cout << S.size() << '\n';
        }
        else if (order == "empty") {
            cout << S.empty() << '\n';
        }
        else if (order == "top") {
            if (S.empty()) cout << "-1\n";
            else {
                cout << S.top() << '\n';
            }
        }
    }

}
