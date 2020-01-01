#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int i = 0;
		for (int j = nums.size() - 1; j >= 0; j--) {
			if (nums[j] == val) {
				int tmp;
				tmp = nums[j];
				nums[j] = nums[nums.size() - 1 - i];
				nums[nums.size() - 1 - i] = tmp;
				i++;
			}
		}
		return nums.size() - i;
	}
};