#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		for (size_t j = 0; j < nums.size(); j++) {
			for (size_t i = 0; i < nums.size() - 1; i++)
			{
				if (nums[i] == 0) swap(nums[i], nums[i + 1]);
			}
		}

	}
};
//int main()
//{
//	int a[] = { 8,1,2,3,6,5,4,2,3,6,5 };
//	vector<int> nums(a, a + size(a));
//	Solution ss;
//	vector<int> num = ss.smallerNumbersThanCurrent(nums);
//	return 0;
//}