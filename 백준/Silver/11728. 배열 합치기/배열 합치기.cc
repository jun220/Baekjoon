#include <iostream>
#include <list>
#include <queue>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    list<int> A;
    list<int> B;
    list<int> C;

    int temp;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        A.push_back(temp);
    }
    for (int i = 0; i < M; i++) {
        cin >> temp;
        B.push_back(temp);
    }


    auto curA = A.begin();
    auto curB = B.begin();

    while (curA != A.end() && curB != B.end()) {
        if (*curA < *curB) {
            C.push_back(*curA);
            curA++;
        }
        else {
            C.push_back(*curB);
            curB++;
        }
    }

    while (curA != A.end()) {
        C.push_back(*curA);
        curA++;
    }

    while (curB != B.end()) {
        C.push_back(*curB);
        curB++;
    }

    for (int n : C) {
        cout << n << ' ';
    }


}