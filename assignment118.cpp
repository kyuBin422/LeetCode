#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		for (int i = 1; i <=numRows; i++) {
			vector<int> nums(i,1);
			if (i < 3) {
				result.push_back(nums);
			}
			else
			{
				for (int j = 1; j < i - 1; j++) {
					vector<int> LastVector = result[i-2];
					nums[j] = LastVector[j - 1] + LastVector[j];

				}
				result.push_back(nums);

			}

		}
		return result;
	}
};


//int main() {
//
//	Solution ss;
//	vector<vector<int>> result =ss.generate(40);
//	return 0;
//}