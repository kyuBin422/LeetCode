#include <iostream>
#include<algorithm>
#include<vector>
#include< map >
#include <stack>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		if (haystack.size() < needle.size()) return -1;
		if (haystack.size() == 0 || needle.size() == 0) return 0;
		for (size_t i = 0; i < haystack.size(); i++)
		{
			int tmpI = i;
			for (size_t j = 0; j < needle.size(); j++)
			{
				if (haystack[tmpI] == needle[j]) {
					tmpI++;
				}
				else
				{
					break;
				}
			}
			if (tmpI == (needle.size() + i) & tmpI != i) return i;
		}
		return -1;
	}
};

//int main() {
//	Solution ss;
//	int result = ss.strStr("hello", "ll");
//	cout << result << endl;
//
//}