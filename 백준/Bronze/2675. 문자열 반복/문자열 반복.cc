#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main(void) {
    int T, S;
    string temp;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> S;
        cin >> temp;
        for (int j = 0; j < temp.length(); j++) {
            for (int k = 0; k < S; k++) {
                cout << temp[j];
            }
        }
        cout << "\n";

    }

    return 0;
}
