#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    

    int A, B, T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << '\n';
    }

    return 0;
}
