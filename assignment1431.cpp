#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		// get the maximal number of candy
		int max_candies_value = INT_MIN;
		vector<bool> result(candies.size());
		for (size_t i = 0; i < candies.size(); i++) {
			max_candies_value = max_candies_value >= candies[i] ? max_candies_value : candies[i];
		}
		//compare
		for (size_t i = 0; i < candies.size(); i++) {
			result[i] = candies[i]+ extraCandies >= max_candies_value;
		}
		return result;
	}
};