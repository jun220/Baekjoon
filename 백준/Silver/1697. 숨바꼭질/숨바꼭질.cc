#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> distance(100001, -1);

	int N, K;
	cin >> N >> K;

	queue<int> Q;
	Q.push(N);
	distance[N] = 0;

	while (distance[K] == -1) {
		int cur = Q.front(); Q.pop(); 
		int dist = distance[cur];

		for (int nxt : {cur - 1, cur + 1, 2 * cur}) {
			if (nxt < 0 || nxt>100000)continue;
			if (distance[nxt] != -1)continue;
			
			Q.push(nxt);
			distance[nxt] = dist + 1;
		}
	}
	cout << distance[K];
}