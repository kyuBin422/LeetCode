#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {

		int l = 0, r = nums.size()-1;
		while (l < r)
		{
			int mid = l + (r - l) / 2;
			if (nums[mid] == target) {

				return mid;
			}
			else if (nums[mid] > target) {
				r = mid;
			}
			else if (nums[mid] < target)
			{
				l = mid + 1;
			};
		}
		
		if (target<=nums[l]) { return sogmiod(l); }
		else if (target>nums[l] ) { return l+ 1; }
		return -1;
	}
private: 
	int sogmiod(int x) {
		return x <= 0 ? 0 : x;
	}
};

//int main() {
//	int a[] = { 1,3,5,6 };
//	vector<int> nums(a, a + size(a));
//	Solution ss;
//	int result = ss.searchInsert(nums, 2);
//}