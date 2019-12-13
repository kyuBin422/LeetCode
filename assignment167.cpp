#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector <int> loc;
		int i = 0;
		int j = numbers.size() - 1;
		while (true) {
			int tmp1 = numbers[i];
			int tmp2 = numbers[j];
			int sumTemp = tmp1 + tmp2;
			if (sumTemp > target) {
				j--;
			}
			else if (sumTemp < target) {
				i++;
			}

			if (tmp1 + tmp2 == target) {
				loc.push_back(i + 1);
				loc.push_back(j + 1);
				return loc;
				break;
			}
		}
		return loc;

	}
};