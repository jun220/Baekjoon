#include <iostream>
#include <deque>
using namespace std;



int main(void) {
    deque<int> DQ;
     
    int N;
    cin >> N;

    string order;
    int x;
    while (N--) {
        cin >> order;
        if (order == "push_front") {
            cin >> x;
            DQ.push_front(x);
        }
        else if (order == "push_back") {
            cin >> x;
            DQ.push_back(x);
        }
        else if (order == "pop_front") {
            if (DQ.empty()) {
                cout << "-1\n";
            }
            else {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        }
        else if (order == "pop_back") {
            if (DQ.empty()) {
                cout << "-1\n";
            }
            else {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
        else if (order == "size") cout << DQ.size() << '\n';
        else if (order == "empty") cout << DQ.empty() << '\n';
        else if (order == "front") {
            if (DQ.empty()) {
                cout << "-1\n";
            }
            else {
                cout << DQ.front() << '\n';
            }
        }
        else if (order == "back") {
            if (DQ.empty()) {
                cout << "-1\n";
            }
            else {
                cout << DQ.back() << '\n';
            }
        }
    }
}
