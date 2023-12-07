#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

long long calculate(long long A, long long B) {
    return (A + B) * (A - B);
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    

    long long A, B;
    cin >> A >> B;
    cout << calculate(A, B);

    return 0;
}
