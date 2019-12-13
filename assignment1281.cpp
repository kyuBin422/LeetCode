#include<iostream>
#include <vector>
#include<string>
using namespace std;

class Solution {
public:
	int subtractProductAndSum(int n) {
		string StringN = to_string(n);
		int tmpSum = 0;
		int tmpProd = 1;
		for (int loop = 0; loop < StringN.size(); loop++) {
			tmpSum += (StringN[loop] - '0');
			tmpProd = tmpProd * (StringN[loop] - '0');


		}
		return tmpProd - tmpSum;
	}
};