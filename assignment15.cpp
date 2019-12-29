#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
	//主要三个难点
	//1、首先对输入向量数据处理，分为三种情况，第一种是出现次数为1，这样直接压入向量，
	//第二种是出现大于1，例如2 2 2，所以不论出现次数多少，压入两个相同进入向量
	//第三种情况是0 0 0
	//2、vector相同直接可以 vec1==vec2
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		//数据预处理，Nums是原始数据，nums是unique的结果，FinalNums是处理后的向量
		if (nums.size() < 3) {
			vector<vector<int>>tmpresult;
			return tmpresult;
		}
		std::sort(nums.begin(), nums.end());
		vector<int> Nums = nums;
		vector<vector<int>>tmpresult;
		vector<int> FinalNums;
		FinalNums = nums;
		for (unsigned int i = 0; i < FinalNums.size() - 2; i++) {
			if (i > 0) { if (FinalNums[i] == FinalNums[i - 1]) { continue; } }

			if (FinalNums[i] > 0) {
				return tmpresult;
			}
			int L = i + 1, R = FinalNums.size() - 1;
			while (L < R) {
				int TmpNum = FinalNums[i] + FinalNums[L] + FinalNums[R];
				if (TmpNum > 0) { R--; }
				else if (TmpNum < 0) { L++; }
				else if (TmpNum == 0)
				{
					int a[] = { FinalNums[i] , FinalNums[L] , FinalNums[R] };
					vector<int> TmpVector(a, a + 3);
					//if (std::count(tmpresult.begin(), tmpresult.end(), TmpVector) == 0) {
					tmpresult.push_back(TmpVector);
					//}
					while ((L < R) & (FinalNums[R] == FinalNums[R - 1])) { R--; };
					while ((L < R) & (FinalNums[L] == FinalNums[L + 1])) { L++; };
					L++;
					R--;
				}
			}
		}
		return tmpresult;
	}
};



//int main() {
//	int a[] = { -1,0,1,2,-1,-4 };
//	vector<int> nums(a, a + size(a));
//	Solution ss;
//	vector<vector<int>> result = ss.threeSum(nums);
//	;
//
//}