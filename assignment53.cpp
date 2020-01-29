#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
////version1
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int maxValue = INT32_MIN;
//		for (int i = 0; i < nums.size(); i++) {
//			int Temp = 0;
//			for (int j = i; j < nums.size(); j++) {
//				Temp = Temp + nums[j];
//				maxValue = maxValue > Temp ? maxValue : Temp;
//			}
//		}
//		cout << maxValue << '\n' << endl;
//
//		return maxValue;
//	}
//};


//version2
class Solution {
public:
	int maxSubArray(vector<int>& nums) {

	}
};
int main() {
	int a[] = { -2147483647 };
	vector<int> candidates(a, a + size(a));
	Solution ss;
	int result = ss.maxSubArray(candidates);	return 0;
}