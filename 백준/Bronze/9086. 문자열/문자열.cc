#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;




int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    string s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        cout << s.front() << s.back() << endl;
    }

    return 0;
}
