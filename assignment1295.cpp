#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	int findNumbers(vector<int>& nums) {
		int result = 0;
		for (int v : nums)
		{
			if (to_string(v).size() % 2==0)
			{
				result++;
			}
		}
		return result;
	}
};

//int main()
//{
//	int list_nums[] = { 12,345,2,6,7896 };
//	vector<int> nums(list_nums, list_nums + size(list_nums));
//	Solution ss;
//	cout << ss.findNumbers(nums);
//	return 0;
//}