#include <iostream>
using namespace std;
//class Solution {
//public:
//	int romanToInt(string s) {
//		int result=0;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == 'I' & s[i + 1] != 'V' & s[i + 1] != 'X' & i < s.size() - 1) {
//				result += 1;
//			}
//			else if (s[i] == 'I' & s[i + 1] == 'V' & s[i + 1] != 'X' & i < s.size() - 1) {
//				result += 4;
//				i++;
//			}
//			else if (s[i] == 'I' & s[i + 1] != 'V' & s[i + 1] == 'X' & i < s.size() - 1) {
//				result += 9;
//				i++;
//			}
//			else if (s[i] == 'V') {
//				result += 5;
//			}
//			else if (s[i] == 'X' & s[i + 1] != 'L' & s[i + 1] != 'C' & i < s.size() - 1) {
//				result += 10;
//			}
//			else if (s[i] == 'X' & s[i + 1] == 'L' & s[i + 1] != 'C' & i < s.size() - 1) {
//				result += 40;
//				i++;
//			}
//			else if (s[i] == 'X' & s[i + 1] != 'L' & s[i + 1] == 'C' & i < s.size() - 1) {
//				result += 90;
//				i++;
//			}
//			else if (s[i] == 'L') {
//				result += 50;
//			}
//			else if (s[i] == 'C' & s[i + 1] != 'D' & s[i + 1] != 'M' & i < s.size() - 1) {
//				result += 100;
//			}
//			else if (s[i] == 'C' & s[i + 1] == 'D' & s[i + 1] != 'M' & i < s.size() - 1) {
//				result += 400;
//				i++;
//			}
//			else if (s[i] == 'C' & s[i + 1] != 'D' & s[i + 1] == 'M' & i < s.size() - 1) {
//				result += 900;
//				i++;
//			}
//			else if (s[i] == 'D') {
//				result += 500;
//			}
//			else if (s[i] == 'M') {
//				result += 1000;
//			}
//			else if (s[i] == 'I'&i==s.size()-1) {
//				result += 1;
//			}
//			else if (s[i] == 'X' & i == s.size() - 1) {
//				result += 10;
//			}
//			else if (s[i] == 'C' & i == s.size() - 1) {
//				result += 100;
//			}
//
//		}
//
//		return result;
//	}
//
//};

class Solution {
public:
	int romanToInt(string s) {
		int result=0;
		int preResult = getNum(s[0]);
		for (int i = 1; i < s.size(); i++) {
			int num= getNum(s[i]);
			if (preResult < num) {
				result -= preResult;
			}
			else
			{
				result += preResult;
			}
			preResult = num;
		
		}
		result += preResult;
		return result;

	}
private:
	int getNum(char s) {
		switch (s)
		{
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			return 0;
		}
	}
};
int main() {
	string s = "MDLXX";
	cout << s[0] << endl;
	Solution ss;
	int result = ss.romanToInt(s);
	cout << result << endl;

}