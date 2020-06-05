#include<iostream>
using namespace std;

class Solution {
public:
	int numberOfSteps(int num) {
		int step_num = 0;
		while (num>0)
		{
			if (num%2==0) num = num / 2;
			else num--;
			step_num++;
		}
		return step_num;
	}
};

//int main() {
//	Solution ss;
//	cout << ss.numberOfSteps(14);
//}