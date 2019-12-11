#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector <int> loc;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 0; j < nums.size(); j++) {
				int tmp1 = nums[i];
				int tmp2 = nums[j];
				if ((tmp1 + tmp2 == target) && (i!=j)) {
					loc.push_back(i);
					loc.push_back(j);

					return loc;
				}


			}

		}
		return loc;

	}
};
int main() {
	Solution ss;
	int a[] = { 3, 2, 4 };
	vector<int> nums(a, a + 3);
	vector <int> loc = ss.twoSum(nums, 6);
}