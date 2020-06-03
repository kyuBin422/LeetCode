#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
		vector<int> target;
		for (size_t i = 0; i < nums.size(); i++)
		{
			target.insert(target.begin() + index[i], nums[i]);
		}
		return target;
	}
};

//int main() {
//	int nums_list[] = { 0,1,2,3,4 };
//	int index_list[] = { 0,1,2,2,1 };
//	vector<int> nums(nums_list, nums_list + size(nums_list));
//	vector<int> index(index_list, index_list + size(index_list));
//	Solution ss;
//	vector<int >result = ss.createTargetArray(nums, index);
//	return 0;
//}