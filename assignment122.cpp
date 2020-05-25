#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int result=0;
		for (size_t i=1;i<prices.size();i++)
		{
			result +=max(prices[i] - prices[i - 1], 0);
		}
		return result;
	}
};

int main()
{
	Solution ss;
	int stock_price[] = { 7,1,5,3,6,4 };
	vector<int> prices(stock_price, stock_price + size(stock_price));
	cout << ss.maxProfit(prices) << endl;
}