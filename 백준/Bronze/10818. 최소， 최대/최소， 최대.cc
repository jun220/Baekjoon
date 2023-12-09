#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
//#include "Rikkabrary.h"

using namespace std;



int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, temp, Max, Min;
    cin >> N;

    cin >> temp;
    Max = temp;
    Min = temp;
    for (int i = 0; i < N-1; i++) {
        cin >> temp;
        if (temp > Max) {
            Max = temp;
        }
        if (temp < Min) {
            Min = temp;
        }
    }

    cout << Min << " " << Max;



    return 0;
}
