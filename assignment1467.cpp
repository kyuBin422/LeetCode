#include <iostream>
#include <vector>
#include <numeric>    

using namespace std;
//https://leetcode.com/problems/probability-of-a-two-boxes-having-the-same-number-of-distinct-balls/discuss/662154/C%2B%2B-76ms%3A-Permutations-of-Combination
class Solution {
	/*
	Track how many balls are left to fill the first box. When left is zero, put remaining balls into the other box.
	Count different colors in each box as col1 and col2; compare in the end.
	The initial/maximum number of permutations in each box is (n / 2)!
	When selecting m balls of particular color, we reduce the number of permutations by m!
	In the end, prm1 and prm2 are permutations in each box.
	- Number of permutations = (n / 2)! / (m1! * m2! * ... * mk!).
	- The total number of permutations with two boxes is prm1 * prm2.
	*/
public:
	static constexpr int fact[7] = { 1, 1, 2, 6, 24, 120, 720 };
	// define total number and match number
	double total = 0, match = 0;

	void dfs(vector<int>& balls, int p, int col1, int col2, int left, double prm1, double prm2) {
		if (left == 0) {
			// left box is full
			for (int i = p; i < balls.size(); i++)
				prm2 /= fact[balls[i]];
			total += prm1 * prm2;
			match += (col1 == col2 + balls.size() - p) ? prm1 * prm2 : 0;
		}
		else if (left > 0 && p < balls.size())
			for (int cnt = 0; cnt <= balls[p]; ++cnt)
				dfs(balls, p + 1, col1 + (cnt > 0), col2 + (cnt < balls[p]),
					left - cnt, prm1 / fact[cnt], prm2 / fact[balls[p] - cnt]);
	}

	double factorial(int n) { return n < 3 ? n : n * factorial(n - 1); }

	double getProbability(vector<int>& balls) {
		auto n = accumulate(begin(balls), end(balls), 0);
		dfs(balls, 0, 0, 0, n / 2, factorial(n / 2), factorial(n / 2));
		return match / total;
	}
};

//int main()
//{
//	vector<int> balls{ 1,2,1,2 };
//	Solution ss;
//	cout << ss.getProbability(balls);
//
//}