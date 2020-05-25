#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//	bool canJump(vector<int>& nums) {
//		int flag = 0;
//		vector<int> nums_zeros_index;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] == 0 & i != nums.size() - 1) {
//				flag++;
//				nums_zeros_index.push_back(i);
//			}
//
//		}
//		if (flag == 0) return true;
//		else
//		{
//			for (int v : nums_zeros_index)
//			{
//				if (v == 0) return false;
//				else if (nums[v - 1]==1) return false;
//			}
//		}
//		return true;
//
//	}
//};

class Solution {
public:
	bool canJump(vector<int>& nums) {
		int i = 0;
		int n = nums.size();
		for (int reach = 0; i < n && i <= reach; ++i)
			reach = max(i + nums[i], reach);
		return i == n;
	}
};

//int main()
//{
//	Solution ss;
//	int strs_list[] = { 0,1 };
//
//	vector<int> nums(strs_list, strs_list + size(strs_list));
//	bool result = ss.canJump(nums);
//	return 0;
//}