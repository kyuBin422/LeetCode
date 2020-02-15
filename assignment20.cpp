#include <iostream>
#include<algorithm>
#include<vector>
#include< map >
#include <stack>
using namespace std;
//使用类似栈思路进行计算，不要使用遍历if方法
class Solution {
public:
	bool isValid(string s) {
		map<char, int> m;
		stack <int> sSet;
		m['('] = 0;
		m[')'] = 1;
		m['{'] = 2;
		m['}'] = 3;
		m['['] = 4;
		m[']'] = 5;
		for (char v : s) {
			if (sSet.size() > 0) {
				if ((int)(m[v] - m[sSet.top()] == 1&& (int)(m[v])%2==1)) {
					sSet.pop();
				}
				else
				{
					sSet.push(v);
				}
			}
			else
			{
				sSet.push(v);
			}
		}
		return sSet.size() == 0;
	}
};

int main() {
	string a = "([)";
	Solution ss;
	bool result = ss.isValid(a);
	cout << result << endl;

}