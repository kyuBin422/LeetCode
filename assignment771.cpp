#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int nums_jewels = 0;
		for (char J_char:J)
		{
			for (char S_char : S)
			{
				nums_jewels += J_char == S_char ? 1 : 0;
			}
		}
		return nums_jewels;
	}
};
