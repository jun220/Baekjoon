#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int N, temp;
vector<int> nums;

//bool isGoodNum(int K) {
//	int i{ 0 }, j{ N - 1 }, sum{ 0 };
//	while (true) {
//		if (i == j) return false;
//		sum = nums[i] + nums[j];
//		if (sum == K) {
//			if (nums[i] == 0) {
//				j--;
//			}
//			else if (nums[j] == 0) {
//				i++;
//			}
//			else {
//				return true;
//			}
//			
//		}
//		else if (sum > K) j--;
//		else i++;
//	}
//
//}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count{ 0 };
	
	

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		nums.push_back(temp);
	}

	

	sort(nums.begin(), nums.end());
	for (int k = 0; k < N; k++) {
		int i = 0;
		int j = N - 1;
		int sum{ 0 };

		while (i < j) {
			sum = nums[i] + nums[j];
			if (sum > nums[k]) j--;
			else if (sum < nums[k]) i++;
			else if (sum == nums[k]) {
				if (i == k) i++;
				else if (j == k) j--;
				else {
					count++;
					break;
				}
			}

		}

	}
	cout << count;
	
	
	return 0;
}   