#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int MOD = 1234567891;
const int BASE = 31;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int L;
    unsigned long long hash = 0;
    unsigned long long power = 1; // BASE^i 값을 저장할 변수
    string word;

    cin >> L >> word;
    for (int i = 0; i < L; i++) {
        hash = (hash + (word[i] - 'a' + 1) * power) % MOD;
        power = (power * BASE) % MOD; // 매번 모듈러 연산을 적용하여 power 값을 업데이트
    }
    cout << hash;

    return 0;
}
