#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main(void) {
    int A, B;
    while (cin >> A >> B) {
        if (A == 0 && B == 0) break;
        cout << A + B << endl;
    }

    return 0;
}
