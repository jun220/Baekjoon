#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void print_vector(const vector<int>& v) {
	for (const T& elem: v) {
		cout << elem << ' ';
	}
}

template<typename T>
void print_2d_vector(const vector<vector<T>>& v) {
	for (const auto& row : v) {
		for (const T& elem : row) {
			cout << elem << ' ';
		}
		cout << '\n';
	}
}


int check_chess(vector<vector<char>>& chess) {
	int count = 0;
	char start_letter = chess[0][0];
	cout << "start_letter : " << start_letter << '\n';
	return count;
}

char swap_letter(char c) {
	if (c == 'B')return 'W';
	else return 'B';
}



int check_chess(vector<vector<char>>& chess, int x, int y) {
	int count = 0;
	char letter = chess[0][0];

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			//cout << "letter to check : " << letter <<
			//	"chess letter : " << chess[i][j] <<
			//	'\n';
			if (chess[i][j] != letter) count++;
			letter = swap_letter(letter);
		}
		letter = swap_letter(letter);
	}

	//cout << "count : " << count << '\n';
	if (count > 32) count = 64 - count;
	return count;


}

void print_chess(vector<vector<char>>& chess, int x, int y) {
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			cout << chess[i][j] << ' ';
		}
		cout << '\n';
	}
}



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);


	int N, M;
	cin >> N >> M;
	// N x M 크기의 2차원 벡터 
	vector<vector<char>> chess(N, vector<char>(M));

	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> chess[i][j];
		}
	}

	//print_2d_vector(chess);
	//check_chess(chess);

	int min_result = 64;

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++){
			int result = check_chess(chess, i, j);
			if(result < min_result) min_result = result;
		}
	}
	cout << min_result;


}