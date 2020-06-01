#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int result = INT_MIN;
		for (size_t i = 0; i < nums.size() - 1; i++)
		{
			for (size_t j = i + 1; j < nums.size(); j++)
			{
				result = result > ((nums[i] - 1) * (nums[j] - 1)) ? result : ((nums[i] - 1) * (nums[j] - 1));
			}
		}
		return result;
	}
};

//int main() {
//	int list2vector[] = { 1,5,4,5};
//	vector<int> nums(list2vector, list2vector + size(list2vector));
//	Solution ss;
//	cout << ss.maxProduct(nums);
//	return 0;
//}