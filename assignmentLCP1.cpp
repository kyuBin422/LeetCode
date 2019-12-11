#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;



class Solution {
public:
	int game(vector<int>& guess, vector<int>& answer) {
		std::vector<int>::const_iterator i1, i2;
		int mark = 0;
		for (i1 = guess.begin(), i2 = answer.begin();
			i1 < guess.end() && i2 < answer.end();
			++i1, ++i2) {
			if (*i1 == *i2) {
				mark++;
			}

		}
		return mark;
	}
};




//int main() {
//	int a[] = { 1,2,3 };
//	int b[] = { 3,2,1};
//	vector<int> guess(a, a + 3);
//	vector<int> answer(b, b + 3);
//	Solution ss;
//	int mark = ss.game(guess, answer);
//
//}