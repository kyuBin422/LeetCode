#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//class Solution {
//public:
//	int search(vector<int>& nums, int target) {
//		if (nums.size() == 0) {
//			return -1;
//		}
//		int loc;
//		int loc1 = 0;
//		int loc2 = (nums.size() - 1) / 2;
//		int loc3 = nums.size() - 1;
//		while (loc2 > loc1 || loc3 > loc3) {
//			if (abs(nums[loc1] - nums[loc2]) > abs(nums[loc3] - nums[loc2])) {
//				loc1 = loc1;
//				loc3 = loc2;
//				loc2 = loc1 + (loc3 - loc1) / 2;
//			}
//			else
//			{
//				loc1 = loc2;
//				loc3 = loc3;
//				loc2 = loc1 + (loc3 - loc1) / 2;
//			};
//		}
//		loc = Max(loc1, loc2, loc3, nums);
//		//查找部分
//		if (loc == 0) {
//			loc1 = 0;
//			loc3 = nums.size() - 1;
//		}
//		else if (target > nums[nums.size() - 1]|loc==nums.size()-1) {
//			loc1 = 0;
//			loc3 = loc;
//		}
//		else
//		{
//			loc1 = loc;
//			loc3 = nums.size() - 1;
//		}
//		for (int i = loc1; i <= loc3; i++) {
//
//			if (nums[i] == target) {
//				return i;
//			};
//		}
//		return -1;
//	}
//private:
//	int Max(int a, int b, int c, vector<int>& nums) {
//		int result = nums[a] > nums[b] ? nums[a] : nums[b];
//		result = result > nums[c] ? result : nums[c];
//		if (nums[a] == result) { return a; }
//		else if (nums[b] == result) { return b; }
//		else { return c; }
//	}
//};
class Solution {
public:
    int search(vector<int>& nums, int target) {
		//二分法
        int L = 0, R = nums.size() - 1;
        while (L < R) {
            int mid = (L + R) / 2;
            if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
                L = mid + 1;
            else
                R = mid;
        }
        return L == R && nums[L] == target ? L : -1;
    }
};

//int main() {
//	int a[] = { 3,5,1 };
//	vector<int> nums(a, a + size(a));
//	Solution ss;
//	int target = 1;
//	int result = ss.search(nums, target);
//	return 1;
//}