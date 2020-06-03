#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Solution {
public:
	int balancedStringSplit(string s) {
		int result = 0;
		int flag = 0;
		for (size_t i=0;i<s.size();i++)
		{
			flag += s[i] == 'L' ? 1 : -1;
			result += flag == 0 ? 1 : 0;

		}
		return result;
	}
};

//int main()
//{
//	Solution ss;
//	cout << ss.balancedStringSplit("RLRRLLRLRL");
//}