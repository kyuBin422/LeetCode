#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string defangIPaddr(string address) {
		string result;
		int flag = 0;
		for (size_t i=0;i<address.size();i++)
		{
			if (address[i]=='.')
			{
				result += "[.]";
			}
			else
			{
				result += address[i];
			}
		}
		return result;
	}
};