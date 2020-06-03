#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> n_vector;
	bool isHappy(int n) {
		n_vector.push_back(n);
		string n_string = to_string(n);
		int flag = 0;
		for (int v:n_vector)
		{
			if (v==n)
			{
				flag++;
			}
			if (flag==2)
			{
				return false;
			}
		}
		n = 0;
		for (char v : n_string)
		{
			n += pow(int(v - '0'), 2);
		}
		if (n == 1)
		{
			return true;
		}
		
		return isHappy(n);
	}
};

//int main() {
//	Solution ss;
//	cout << ss.isHappy(19);
//	return 0;
//}