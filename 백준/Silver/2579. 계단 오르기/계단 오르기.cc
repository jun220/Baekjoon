#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int length;
    cin >> length;

    vector<int> stairs(length);
    vector<vector<int>> max_score(length, vector<int>(2, 0));
    // max_score[i][0]: i번째 계단에서 두 칸 건너뛴 상태의 최대 점수
    // max_score[i][1]: i번째 계단에서 바로 이전 칸을 밟은 상태의 최대 점수

    for (int i = 0; i < length; i++) {
        cin >> stairs[i];
    }

    // 특수 케이스 처리
    if (length == 1) {
        cout << stairs[0];
        return 0;
    }
    if (length == 2) {
        cout << stairs[0] + stairs[1];
        return 0;
    }

    // 초기값 설정
    max_score[0][0] = stairs[0];
    max_score[0][1] = 0; // 첫 번째 계단에서는 바로 이전 칸이 없으므로 불가능
    max_score[1][0] = stairs[1]; // 두 칸 건너뛴 상태
    max_score[1][1] = stairs[0] + stairs[1]; // 바로 이전 칸을 밟은 상태

    // DP 점화식 계산
    for (int i = 2; i < length; i++) {
        max_score[i][0] = stairs[i] + max(max_score[i - 2][0], max_score[i - 2][1]);
        max_score[i][1] = stairs[i] + max_score[i - 1][0];
    }

    // 마지막 계단은 반드시 밟아야 하므로 두 가지 경우 중 최댓값 선택
    cout << max(max_score[length - 1][0], max_score[length - 1][1]);
    return 0;
}
