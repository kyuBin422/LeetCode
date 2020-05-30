#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> nums;
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector<int> result;
		for (size_t i=0;i<nums.size();i++)
		{
			int counter_smaller_numsers=0;
			for (size_t j = 0; j < nums.size(); j++)
			{
				counter_smaller_numsers += nums[i] > nums[j] ? 1 : 0;
			}
			result.push_back(counter_smaller_numsers);
		}
		return result;
	}
//private:
//	void quicksort(vector<int>& nums,int low,int high){
//		if (low < high) {
//			int pi = partition(nums, low, high);
//			quicksort(nums, low, pi-1);
//			quicksort(nums, pi+1, high);
//		}
//	}
//	int partition(vector<int>& nums, int low, int high) {
//		int pivot = nums[high];
//		int i = low - 1;
//		for (size_t j=low;j<high;j++)
//		{
//			if (nums[j]<pivot)
//			{
//				i++;
//				swap(nums[i], nums[j]);
//			}
//		}
//		swap(nums[i+1], nums[high]);
//		return i + 1;
//	}
};


//int main()
//{
//	int a[] = { 8,1,2,3,6,5,4,2,3,6,5 };
//	vector<int> nums(a, a + size(a));
//	Solution ss;
//	vector<int> num = ss.smallerNumbersThanCurrent(nums);
//	return 0;
//}