#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*int Doomsday(int n) {
	
}*/ 

bool sixSerial(const int &n) {
	string str = to_string(n);
	return str.find("666") != string::npos;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> DoomsdayVector;
	int temp{ 1 }, index{ 0 };
	int N;

	while (true) {
		if (index == 10000) break;
		if (sixSerial(temp)) {
			DoomsdayVector.push_back(temp);
			index++;
		}
		temp++;
	}

	//for (int i = 0; i < DoomsdayVector.size(); i++) {
	//	cout << i << " : " << DoomsdayVector[i] << '\n';
	//}

	cin >> N;
	cout << DoomsdayVector[N-1];


	
}