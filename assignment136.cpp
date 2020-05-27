#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
// sort and find
//class Solution {
//public:
//	vector<int> nums;
//	int singleNumber(vector<int>& nums) {
//		this->nums = nums;
//		quickSort(nums, 0, nums.size() - 1);
//		for (int i = 0; i < nums.size() - 1; i += 2)
//		{
//			if (nums[i] != nums[i + 1])
//			{
//				return nums[i];
//			}
//		}
//		return nums[nums.size() - 1];
//	}
//private:
//	void quickSort(vector<int>& nums, int low, int high) {
//		if (low < high)
//		{
//			int pi = partition(nums, low, high);
//			quickSort(nums, low, pi - 1);
//			quickSort(nums, pi + 1, high);
//
//		}
//	}
//	int partition(vector<int>& nums, int low, int high) {
//		int priot = nums[high];
//		int i = low - 1;
//		for (int j = low; j < high; j++)
//		{
//			if (nums[j] < priot)
//			{
//				i++;
//				swap(nums[i], nums[j]);
//			}
//		}
//		swap(nums[i + 1], nums[high]);
//		return i + 1;
//	}
//};
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int result = 0;
		for (size_t i = 0; i < nums.size(); i++)
		{
			result ^= nums[i];
		}
		return result;
	}
};
//int main()
//{
//	Solution ss;
//	int nums_list[] = { 4,1,2,1,2 };
//	vector<int> nums(nums_list, nums_list + size(nums_list));
//	cout << ss.singleNumber(nums);
//
//}