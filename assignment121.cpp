#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
////version 1
//class Solution {
//public:
//	int maxProfit(vector<int>& prices) {
//		int MaxVaule = 0;
//		if (prices.size() < 2) { return 0; }
//		for (int i = 0; i < prices.size()-1; i++) {
//			for (int j = i + 1; j < prices.size(); j++) {
//				MaxVaule = MaxVaule > prices[j] - prices[i] ? MaxVaule : prices[j] - prices[i];
//			}
//		}
//		return MaxVaule > 0 ? MaxVaule : 0;
//	}
//};
//version 2
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() < 2) { return 0; }
		int result = 0;
		int last = 0;
		for (int i = 0; i < prices.size()-1; i++) {
			last = max((last + prices[i + 1] - prices[i]), 0);
			result = max(last, result);
		}
		return result;
	}
};

//int main() {
//
//	Solution ss;
//	int a[] = { 7,1,5,3,6,4};
//	vector<int> prices(a,a+size(a));
//	int result = ss.maxProfit(prices);
//	return 0;
//}