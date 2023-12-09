#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
//#include "Rikkabrary.h"

using namespace std;




int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, M, temp;
    cin >> N >> M;

    vector<vector<int>> v(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> temp;
            v[i].push_back(temp);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> temp;
            v[i][j] += temp;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}
