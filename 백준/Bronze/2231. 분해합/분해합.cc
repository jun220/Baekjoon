#include <iostream>
#include <string>
#include <vector>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, start;
    cin >> N;
    int result{ 0 };
    

    start = N - 9 * static_cast<int>(to_string(N).length());

    for (int i = start; i < N; i++) {
        int sum = i;
        sum += digitSum(i);
        if (sum == N) {
            result = i;
            break;
        }
    }
    
    cout << result;

    return 0;
}
