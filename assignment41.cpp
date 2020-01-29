#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++) {
			while (nums[i] != i + 1) {
				//nums[nums[i] - 1])是取他索引位置的值
				if (nums[i] <= 0 || nums[i] > nums.size() || nums[i] == nums[nums[i] - 1])
				{
					break;
				}
				int idx = nums[i] - 1;
				//swap
				nums[i] = nums[idx];
				nums[idx] = idx + 1;
			}
		}
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != (i + 1)) {
				return (i + 1);
			}
		}
		return (nums.size() + 1);
	}
};


//int main() {
//	int a[] = { 1,1};
//	vector<int> candidates(a, a + size(a));
//	Solution ss;
//	int result = ss.firstMissingPositive(candidates);	return 0;
//}