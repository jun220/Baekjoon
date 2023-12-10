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

bool isLowerCase(char c) {
    if (c <= 90) return false;
    return true;
}

void change(string& s) {
    for (int i = 0; i < s.length(); i++) {
        if (isLowerCase(s[i])) s[i] -= 32;
        else s[i] += 32;
    }
}

int main(void) {
    string s;
    cin >> s;

    change(s);
    cout << s;

    //array<int, 6> arr = { 1, 2, 3, 4, 5, 6 };
    //print(arr);
    return 0;
}