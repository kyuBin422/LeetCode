#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		vector<int> result;
		for (size_t i=0;i<nums.size()/2;i++)
		{
			int freq = nums[2 * i];
			int val= nums[2 * i + 1];
			for (size_t loop=0;loop< freq;loop++)
			{
				result.push_back(val);
			}
		}
		return result;
	}
};
