#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <forward_list>
#include <string>
using namespace std;

int calculate(double N) {
    int i = 1;
    if (N == 0)return 1;
    while (true) {
        //cout << N << " <= 3 * " << i << " * " << i + 1 
        //    << "(" << 3*i*(i+1) << ") ?\n";
        if (N <= 3 * i * (i + 1)) break;
        i++;
    }
    return i + 1;
}

int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상을 위해
    cin.tie(NULL);

    int i{ 1 };
    double N;
    cin >> N;
    cout << calculate(N - 1);
    //while (true) {
    //    cin >> N;
    //    cout << calculate(N-1) << '\n';
    //}


    return 0;
}
