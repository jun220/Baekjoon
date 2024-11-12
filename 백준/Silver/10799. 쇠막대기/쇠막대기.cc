#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;




int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> S;
    string laser;
    char prev=' ';

    cin >> laser;

    int count{ 0 };

    for (char n : laser) {
        
        if (n == ')') {
            if (prev == '(') {
                // cut 할 차례
                // 레이저라는 뜻으로 쓰인 (를 제외하고 조각 추가
                count += S.size() - 1;
                //cout << "cut! " << S.size() - 1
                //    << "조각 추가\n";
                S.pop();
            }
            else {
                // 쇠막대기의 끝이라는 뜻
                count += 1;
                S.pop();
            }
        }
        else {
            S.push(n);
        }

        prev = n;
    }

    cout << count;

}