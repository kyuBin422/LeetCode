#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() < 1) { return ""; }
		string result = strs[0];
		int Index = 1000;
		for (string v : strs)
		{
			int tmp = 0;
			for (int i = 0; i < result.size(); i++) {
				if (v[i] == result[i]) {
					tmp++;
				}
				else
				{
					break;
				}

			}
			Index = std::min(Index, tmp);

		}
		return result.substr(0, Index);

	}
};

//int main() {
//	string a[] = { "flower","flow","flight" };
//	vector<string> strs(a, a + size(a));
//	Solution ss;
//	string result = ss.longestCommonPrefix(strs);
//	cout << result << endl;
//
//}