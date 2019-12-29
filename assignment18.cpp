#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		std::sort(nums.begin(), nums.end());
		vector<vector<int>> result;
		if (nums.size() < 4) {
			return result;
		}
		for (int i = 0; i < nums.size() - 3; i++) {
			//if (i > 0) { if (nums[i] == nums[i - 1]) { continue; } }
			for (int j = i + 1; j < nums.size() - 2; j++) {
				//if (j > 1 & i > 0) { if (nums[j] + nums[i] == nums[j - 1] + nums[i - 1]) { continue; } }
				int L = j + 1, R = nums.size() - 1;
				while (L < R) {
					int TmpNum = nums[i] + nums[j] + nums[L] + nums[R];
					if (TmpNum - target > 0)
					{
						R--;
					}
					else if (TmpNum - target < 0)
					{
						L++;
					}
					else {
						int a[] = { nums[i] , nums[j] , nums[L] , nums[R] };
						vector<int> TmpVector(a, a + 4);
						if (std::count(result.begin(), result.end(), TmpVector) < 1) {
							result.push_back(TmpVector);
						}
						while ((L < R) & (nums[R] == nums[R - 1])) { R--; };
						while ((L < R) & (nums[L] == nums[L + 1])) { L++; };
						L++;
						R--;
					};
				}

			}
		}
		return result;
	}
};

int main() {
	int a[] = { -3,-2,-1,0,0,1,2,3 };
	vector<int> nums(a, a + size(a));
	int target = 0;
	Solution ss;
	vector<vector<int>> result = ss.fourSum(nums, target);
	;

}