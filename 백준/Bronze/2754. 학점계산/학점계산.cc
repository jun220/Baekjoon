#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <algorithm>
//#include "Rikkabrary.h"

using namespace std;



int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    double score = 0.0;
    char A, B;
    cin >> A >> B;
    
    switch (A) {
    case 'A':
        score = 4.0;
        break;
    case 'B':
        score = 3.0;
        break;
    case 'C':
        score = 2.0;
        break;
    case 'D':
        score = 1.0;
        break;
    }

    switch (B) {
    case '+':
        score += 0.3;
        break;
    case '-':
        score -= 0.3;
        break;
    }

    //cout << fixed;
    cout.precision(1);
    cout << fixed << (double)score;

    

    return 0;
}
