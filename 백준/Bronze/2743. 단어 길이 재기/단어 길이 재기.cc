#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
using namespace std;

long long calculate(long long A, long long B) {
    return (A + B) * (A - B);
}

int main(void) {
    string word;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    

    cin >> word;
    cout << word.length();
    return 0;
}
