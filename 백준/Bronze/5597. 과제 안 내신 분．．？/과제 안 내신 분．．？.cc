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
    
    vector<int>v;
    int N;
    for (int i = 1; i <= 30; i++) {
        v.push_back(i);
    }

    for (int i = 0; i < 28; i++) {
        cin >> N;
        remove(v.begin(), v.end(), N);
    }

    cout << v[0] << '\n' << v[1];
    

    return 0;
}
