#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int A[26];

void check_alphabet(char letter) {
    int index = letter - 'a';
    A[index]++;
}


int main(void) {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(A, A + 26, 0);

    string word;
    cin >> word;
    for (char c : word) {
        check_alphabet(c);
    }

    for (int n : A) {
        cout << n << ' ';
    }
    return 0;
}