#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <algorithm>
#include <string>
//#include "Rikkabrary.cpp"

    //cin.tie(NULL);
    //ios_base::sync_with_stdio(false);

using namespace std;

template<size_t N>
void print(array<int, N> arr) {
    for (auto ele : arr)
        cout << ele << ", ";
}

int main(void) {
    int N, sum{ 0 };
    string s;
    cin >> N >> s;
    for (int i = 0; i < N; i++) {
        sum += s[i] - '0';
    }
    cout << sum;
    return 0;
}