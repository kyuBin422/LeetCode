#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		vector<int>::iterator ip = std::unique(nums.begin(), nums.end());
		nums.erase(ip, nums.end());
		return nums.size();
	}
};
