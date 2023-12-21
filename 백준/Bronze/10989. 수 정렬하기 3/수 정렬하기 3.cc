#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상을 위해
    cin.tie(NULL);
    int N, temp;
    int counts[10001] = { 0 };
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        counts[temp]++;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < counts[i]; j++) {
            cout << i << '\n';
        }
    }
    return 0;
}
