#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		//字典序排列问题
		next_permutation(nums.begin(), nums.end());
	}
};

//int main() {
//	int a[] = { 1,1 };
//	vector<int> nums(a, a + 2);
//	Solution ss;
//	ss.nextPermutation(nums);
//	return 1;
//}