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
    string sentence;
    cin >> N;

    cin.ignore();

    for (int i = 0; i < N; i++) {
        getline(cin, sentence);
        cout << i + 1 << ". "
            << sentence << '\n';
    }
    


    return 0;
}
