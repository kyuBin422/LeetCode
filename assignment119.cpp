#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//	vector<int> getRow(int rowIndex) {
//		rowIndex++;
//		vector<vector<int>> result;
//		for (int i = 1; i <= rowIndex; i++) {
//			vector<int> nums(i, 1);
//			if (i < 3) {
//				result.push_back(nums);
//			}
//			else
//			{
//				for (int j = 1; j < i - 1; j++) {
//					vector<int> LastVector = result[i - 2];
//					nums[j] = LastVector[j - 1] + LastVector[j];
//
//				}
//				result.push_back(nums);
//
//			}
//
//		}
//		return result[rowIndex-1];
//	}
//};

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> result;
		for (int i = 0; i <= rowIndex; ++i) {
			result.push_back(1);
			for (int j = i - 1; j > 0; --j) {
				result[j] += result[j - 1];
			}
		}
		return result;
	}
};
//
//int main() {
//
//	Solution ss;
//	vector<int> result = ss.getRow(4);
//	return 0;
//}