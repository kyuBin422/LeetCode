#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//	int threeSumClosest(vector<int>& nums, int target) {
//		std::sort(nums.begin(), nums.end());
//		int Min = 10000;
//		for (unsigned int i = 0; i < nums.size()-2; i++) {
//			int L = i + 1, R = nums.size() - 1;
//			while (L < R) {
//				int TmpSum = nums[i] + nums[L] + nums[R];
//				if (abs(TmpSum -target) > 0) {
//					Min = abs(Min - target) > abs(TmpSum - target) ? (TmpSum) : Min;
//					if (((nums[L + 1] - nums[L]) > (nums[R] - nums[R - 1]))& (L > i + 1)& (R < nums.size() - 1)) { R--; }
//					else { L++; }
//				}
//				else {return target; }
//			}
//
//		}
//		return Min;
//
//	}
//
//
//};

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		int Min = 10000;
		for (int i = 0; i < nums.size()-2; i++) {
			for (int j = i + 1; j < nums.size() - 1; j++) {
				for (int k = j + 1; k < nums.size(); k++) {
					int tmp = nums[i] + nums[j] + nums[k];
					Min = abs(Min - target) > abs(tmp - target) ? (tmp) : Min;
				}
			}
		}

		return Min;
	}
};

//int main() {
//	int a[] = { 1,1,-1,-1,3 };
//	vector<int> nums(a, a + size(a));
//	int target = -1;
//	Solution ss;
//	int result = ss.threeSumClosest(nums, target);
//	;
//
//}