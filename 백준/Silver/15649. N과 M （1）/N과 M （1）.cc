#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//void backtrack(int N, int M, int depth, vector<int> prev = vector<int>(0)) {
//    // 마지막 depth에 도착했다면
//    if (depth == M) {
//        for (int i = 1; i <= N; i++) {
//            for (int n : prev) cout << n << ' ';
//            cout << i << '\n';
//        }
//        return;
//    }
//    depth++;
//    for (int i = 1; i <= N; i++) {
//        prev.push_back(i);
//        backtrack(N, M, depth, prev);
//        prev.pop_back();
//    }
//    
//
//}

int N, M;
int arr[10];
bool isused[10];
// N과 M이 모두 8 이하이므로 10 정도 크기면 충분하다.

void backtrack(int depth) {
    // 마지막 depth에 도착했다면, 그러니까 수열이 완성되었다면
    if (depth == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return; // 재귀 종료
    }

    for (int i = 1; i <= N; i++) {
        // 사용하지 않은 숫자를 탐색
        if (!isused[i]) {
            // arr[depth]를 채움
            arr[depth] = i;

            // 사용 처리
            isused[i] = true;
            
            
            // 다음 depth에 대한 작업 시작
            backtrack(depth + 1);
            
            // i=1로부터 시작되었다고 생각하자
            // 이제 1로 시작하는 수열은 모두 작성했다는 뜻이다. 다시 원점으로 돌아온 것.
            // 이제 2로 시작하는 수열을 만들 차례. 따라서 1에 대한 isused는 초기화해야 한다.
            isused[i] = false;
        }
    }
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;

    backtrack(0);
    

}