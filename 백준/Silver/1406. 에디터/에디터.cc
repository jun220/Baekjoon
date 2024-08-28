#include <iostream>
#include <list>
using namespace std;

list<char> L;
list<char>::iterator it = L.end();

int main(void) {
    string s;
    cin >> s;
    for (char c : s) {
        L.push_back(c);
    }
    
    int M;
    char order, character;

    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> order;
        if (order == 'L') {
            if(it != L.begin())
                it--;
        }
        else if (order == 'D') {
            if (it != L.end())
                it++;
        }
        else if (order == 'B') {
            if (it != L.begin()) {
                it--;
                it = L.erase(it);
            }
        }
        else if (order == 'P') {
            cin >> character;
            L.insert(it, character);
        }
    }
    for (char n : L) {
        cout << n;
    }
}
