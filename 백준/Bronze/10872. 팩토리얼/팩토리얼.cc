#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
    int N;
    int temp = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        temp *= i;
    }
    cout << temp;

    return 0;
}

