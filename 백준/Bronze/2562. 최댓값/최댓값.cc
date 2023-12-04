#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main(void) {
    int Max{ 0 }, MaxIndex, temp;

    for (int i = 0; i < 9; i++) {
        cin >> temp;
        if (temp > Max) {
            Max = temp;
            MaxIndex = i+1;
        }
    }

    cout << Max << endl << MaxIndex;
    

    return 0;
}
