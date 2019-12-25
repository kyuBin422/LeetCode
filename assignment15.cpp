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
		std::sort(nums.begin(), nums.end());
		vector<int> Nums = nums;
		vector<vector<int>>tmpresult;
		vector<int> FinalNums;
		vector<int>::iterator iter = unique(nums.begin(), nums.end());
		nums.erase(iter, nums.end());
		for (int v : nums) {
			int CountNums = std::count(Nums.begin(), Nums.end(), v);
			if (CountNums == 1) { FinalNums.insert(FinalNums.end(), 1, v); }
			else if ((v == 0) & (CountNums >= 3)) { FinalNums.insert(FinalNums.end(), 3, v); }
			else { FinalNums.insert(FinalNums.end(), 2, v); }

		}
		for (int i = 0; i < FinalNums.size(); i++) {
			for (int j = i + 1; j < FinalNums.size(); j++) {
				for (int k = j + 1; k < FinalNums.size(); k++) {
					if ((FinalNums[i] + FinalNums[j] + FinalNums[k]) == 0) {
						int list[] = { FinalNums[i],FinalNums[j] ,FinalNums[k] };
						vector<int> tmp(list, list + 3);
						if (std::count(tmpresult.begin(), tmpresult.end(), tmp) == 0) { tmpresult.push_back(tmp); }

					}
				}
			}
		}
		return tmpresult;
	}
//private:
//	vector<vector<int>> findlocation(vector<vector<int>>& result) {
//		vector<vector<int>> FinalResult;
//
//		for (int i = 0; i < result.size(); i++) {
//			bool tmp = true;
//			vector<int> tmpobj1 = result[i];
//			for (int j = i + 1; j < result.size(); j++) {
//				vector<int> tmpobj2 = result[j];
//				tmp = tmp & (tmpobj1 != tmpobj2);
//
//			}
//			if (tmp) {
//				FinalResult.push_back(tmpobj1);
//			}
//		}
//		return FinalResult;
//
//	}
};



int main() {
	int a[] = { -13, 10, 11, -3, 8, 11, -4, 8, 12, -13, 5, -6, -4, -2, 12, 11, 7, -7, -3, 10, 12, 13, -3, -2, 6, -1, 14, 7, -13, 8, 14, -10, -4, 10, -6, 11, -2, -3, 4, -13, 0, -14, -3, 3, -9, -6, -9, 13, -6, 3, 1, -9, -6, 13, -4, -15, -11, -12, 7, -9, 3, -2, -12, 6, -15, -10, 2, -2, -6, 13, 1, 9, 14, 5, -11, -10, 14, -5, 11, -6, 6, -3, -8, -15, -13, -4, 7, 13, -1, -9, 11, -13, -4, -15, 9, -4, 12, -4, 1, -9, -5, 9, 8, -14, -1, 4, 14 };
	vector<int> nums(a, a + size(a));
	Solution ss;
	vector<vector<int>> result = ss.threeSum(nums);
	;

}