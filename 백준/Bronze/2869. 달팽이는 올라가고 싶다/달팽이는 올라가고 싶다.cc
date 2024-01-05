#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B, V;
    cin >> A >> B >> V;

    int days = ceil((double)(V - B) / (A - B));
    cout << days;

    return 0;
}