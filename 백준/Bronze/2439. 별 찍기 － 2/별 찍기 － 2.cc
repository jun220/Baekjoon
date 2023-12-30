#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <forward_list>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false); // 입출력 속도 향상을 위해
    cin.tie(NULL);
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N-i; j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}
