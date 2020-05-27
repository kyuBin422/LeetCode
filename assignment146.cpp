#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


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
int main()
{
	Solution ss;
	int nums_list[] = { 4,1,2,1,2 };
	vector<int> nums(nums_list, nums_list + size(nums_list));
	cout << ss.singleNumber(nums);

}