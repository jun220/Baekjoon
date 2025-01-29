#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Person {
    int age;
    string name;
};

bool compare(const Person& a, const Person& b) {
    return a.age < b.age;
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;



    if (N == 4 || N == 7) {
        cout << -1;
        return 0;
    }

    int a = (N % 5) % 3;
    int ans = 0;
    //cout << "a: " << a << '\n';

    if (a == 0) {
        ans += N / 5;
        N %= 5;
    }
    else if (a == 1) {
        ans += (N / 5) - 1;
        N = (N % 5) + 5;
    }
    else if (a == 2) {
        ans += (N / 5) - 2;
        N = (N % 5) + 10;
    }
    //cout << "5짜리 봉지 수 : " << ans << '\n';
    ans += N / 3;
    cout << ans;

}