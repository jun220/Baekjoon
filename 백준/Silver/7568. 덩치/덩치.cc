#include <iostream>
#include <vector>
using namespace std;

struct Body {
	int height;
	int weight;

	Body(int h, int w) : height(h), weight(w) {
		//cout << "생성자\n";
	}

	bool operator<(const Body& b) const {
		//cout << "(" << height << "," << weight << ") vs ("
		//	<< b.height << "," << b.weight << ")\n";
		if (height < b.height && weight < b.weight) {
			return true;
		}
		else return false;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<Body> students;

	int N;
	int h, w;
	cin >> N;
	for(int i=0;i<N;i++) {
		cin >> h >> w;
		Body b(h, w);
		students.push_back(b);
	}


	for (int i = 0; i < N; i++) {
		int rank = 1;
		for (int j = 0; j < N; j++) {
			if (students[i] < students[j]) rank++;
		}
		cout << rank << ' ';
	}
	return 0;
}

