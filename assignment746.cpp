#include<iostream>
#include <vector>
#include <algorithm> 

class Solution {
public:
	int minCostClimbingStairs(std::vector<int>& cost) {
		int size = cost.size();
		std::vector<int> dp;
		dp.push_back(cost[0]);
		dp.push_back(cost[1]);
		for (int i = 2; i < size; i++)
		{
			dp.push_back(std::min(dp[i - 1] + cost[i], dp[i - 2] + cost[i]));
		}
		return std::min(dp[size - 1], dp[size - 2]);


		//return _solver(cost, 0);
	}
	//int _solver(std::vector<int>& cost, int index) {
	//	if (index >= cost.size()-1) return 0;
	//	return std::min(_solver(cost, index + 2) + cost[index + 1], _solver(cost, index + 1) + cost[index]);
	//}

};

//int main()
//{
//	Solution ss;
//	int a[] = { 0, 0, 1, 1 };
//	std::vector<int> cost(a, a + 4);
//	std::cout << ss.minCostClimbingStairs(cost);
//	return 0;
//}