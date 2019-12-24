#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
////该版本超时，重写一个
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		vector<vector<int>> Result, tmpResult;
//		for (int i = 0; i < nums.size(); i++) {
//			for (int j = i + 1; j < nums.size(); j++) {
//				for (int k = j + 1; k < nums.size(); k++) {
//					if ((nums[i] + nums[j] + nums[k]) == 0) {
//						int List[] = { nums[i],nums[j] ,nums[k] };
//						vector<int> Tmp(List, List + 3);
//						std::sort(Tmp.begin(), Tmp.end());
//						tmpResult.push_back(Tmp);
//					}
//				}
//			}
//		}
//		/*去重部分*/
//		/*vector去重部分没有完成，需要重写
//		其中重点是如何设置迭代*/
//		vector<int> Label = FindLocation(tmpResult);
//		for (int i = 0; i < tmpResult.size(); i++) {
//			if (Label[i] == 0)
//			{
//				 Result.push_back(tmpResult[i]);
//			}
//		}
//		return Result;
//	}
//	vector<int> FindLocation(vector<vector<int>>& Result) {
//		vector<int> Label;
//		for (int i = 0; i < Result.size(); i++) {
//			Label.push_back(0);
//		}
//		for (int i = 0; i < Result.size(); i++) {
//			for (int j = i + 1; j < Result.size(); j++) {
//				vector<int> tmpObj1 = Result[i];
//				vector<int> tmpObj2 = Result[j];
//				bool BoolValue = true;
//				for (int loop = 0; loop < 3; loop++) {
//					BoolValue = BoolValue & (tmpObj1[loop] == tmpObj2[loop]);
//				}
//				if (BoolValue) {
//					Label[i] = 1;
//				}
//			}
//		}
//		return Label;
//
//	}
//};

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		std::sort(nums.begin(), nums.end());
		vector<int>::iterator iter = unique(nums.begin(), nums.end());
		nums.erase(iter, nums.end());

		vector<vector<int>> Result, tmpResult;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				for (int k = j + 1; k < nums.size(); k++) {
					if ((nums[i] + nums[j] + nums[k]) == 0) {
						int List[] = { nums[i],nums[j] ,nums[k] };
						vector<int> Tmp(List, List + 3);
						tmpResult.push_back(Tmp);
					}
				}
			}
		}
		return tmpResult;

	}
};

int main() {
	int a[] = { -13, 5, 13, 12, -2, -11, -1, 12, -3, 0, -3, -7, -7, -5, -3, -15, -2, 14, 14, 13, 6, -11, -11, 5, -15, -14, 5, -5, -2, 0, 3, -8, -10, -7, 11, -5, -10, -5, -7, -6, 2, 5, 3, 2, 7, 7, 3, -10, -2, 2, -12, -11, -1, 14, 10, -9, -15, -8, -7, -9, 7, 3, -2, 5, 11, -13, -15, 8, -3, -7, -12, 7, 5, -2, -6, -3, -10, 4, 2, -5, 14, -3, -1, -10, -3, -14, -4, -3, -7, -4, 3, 8, 14, 9, -2, 10, 11, -10, -4, -15, -9, -1, -1, 3, 4, 1, 8, 1 };
	vector<int> nums(a, a + size(a));
	Solution ss;
	vector<vector<int>> result = ss.threeSum(nums);
	;

}