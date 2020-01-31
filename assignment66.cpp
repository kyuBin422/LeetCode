#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		vector<int> result;
		int quotient = 1;
		for (int i = digits.size() - 1; i >= 0; i--) {
			int v = digits[i];

			int remainder = (v + quotient) % 10;
			quotient = (v + quotient) / 10;

			result.push_back(remainder);
			if (quotient == 1 & i == 0) {
				result.push_back(1);
			}
		}
		std::reverse(result.begin(), result.end());
		return result;
	}
};


//int main() {
//	int a[] = { 4,2,3,3,4,5,2 };
//	vector<int> candidates(a, a + size(a));
//	Solution ss;
//	vector<int> result = ss.plusOne(candidates);
//	return 0;
//}