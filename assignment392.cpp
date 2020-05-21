#include<iostream>
#include <string> 
#include <vector>

class Solution {
public:
	bool isSubsequence(std::string s, std::string t) {
		std::vector<int> match_index_list;
		int pointer = 0;
		for (int i = 0; i < s.size(); i++) {
			for (int j = pointer; j < t.size(); j++) {
				if (s[i] == t[j])
				{
					match_index_list.push_back(j);
					pointer = j + 1;
					break;
				}
			}
		}
		return match_index_list.size() == s.size();
	}
};

//int main()
//{
//	Solution ss;
//	int a[] = { 0, 0, 1, 1 };
//	std::string s = "acb";
//	std::string t = "llllllalllllllclllllblllll";
//	std::cout << ss.isSubsequence(s, t);
//	return 0;
//}