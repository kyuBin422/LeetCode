#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//	vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		vector<int> strs_ascii;
//		// get the ascii code
//		for (string string_strs_single : strs)
//		{
//			int num = 0;
//			for (char tmp_char : string_strs_single)
//			{
//				num += tmp_char - 'a';
//			}
//			strs_ascii.push_back(num);
//		}
//		// sort the ascii code by ascend
//		for (int i = 0; i < strs_ascii.size(); i++)
//		{
//			for (int j = i + 1; j < strs_ascii.size(); j++)
//			{
//				if (strs_ascii[i] > strs_ascii[j])
//				{
//					swap(strs_ascii[i], strs_ascii[j]);
//					swap(strs[i], strs[j]);
//				}
//			}
//		}
//		vector<vector<string>> result;
//		int tmp_string_ascii = strs_ascii.back();
//		vector<string> sub_result;
//		for (int i = strs.size()-1; i >=0; i--)
//		{
//			if (strs_ascii[i]== tmp_string_ascii)
//			{
//				sub_result.push_back(strs[i]);
//				strs_ascii.pop_back();
//
//			} 
//			else
//			{
//				result.push_back(sub_result);
//				tmp_string_ascii = strs_ascii[i];
//				sub_result.clear();
//				i++;
//			}
//			if (i==0) result.push_back(sub_result);
//		}
//		return result;
//	}
//};

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		//initial final result
		vector<vector<string>> result;
		vector<string> subresult;

		vector<string> strs_ascend = strs;
		vector<int> select_flag;
		// sort all string in vector
		for (int i = 0; i < strs.size(); i++)
		{
			if (strs[i]=="")
			{
				;
			} 
			else
			{
				strs_ascend[i] = sortChar(strs[i]);
			}
			select_flag.push_back(0);
		}
		//compare string in strs_ascend
		for (int i = 0; i < strs_ascend.size(); i++)
		{
			subresult.clear();
			if (select_flag[i] == 1) continue;
			subresult.push_back(strs[i]);
			select_flag[i] = 1;
			for (int j = i+1; j < strs_ascend.size(); j++)
			{
				if (select_flag[j]==0& strs_ascend[i]== strs_ascend[j])
				{
					subresult.push_back(strs[j]);
					select_flag[j] = 1;
				}
			}
			result.push_back(subresult);
		}
		return result;
	}
private:
	string sortChar(string str) {
		// bubble sort
		for (int i = 0; i < str.size() - 1; i++) {
			for (int j = i + 1; j < str.size(); j++) {
				int str1_ascii_code = str[i];
				int str2_ascii_code = str[j];
				if (str1_ascii_code > str2_ascii_code) {
					swap(str[i], str[j]);
				}
			}
		}
		return str;
	}
};

//int main()
//{
//	Solution ss;
//	string strs_list[] = {""};
//
//	vector<string> strs(strs_list, strs_list + size(strs_list));
//	vector<vector<string>> result = ss.groupAnagrams(strs);
//	return 0;
//}