#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
using namespace std;

long long calculate(long long A, long long B) {
    return (A + B) * (A - B);
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    

    vector<int> v;
    int n;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        v.push_back(n);
    }
    
    int sum{ 0 };
    for (int i = 0; i < v.size(); i++) {
        sum += v[i] * v[i];
    }
    cout << sum % 10;


    return 0;
}
