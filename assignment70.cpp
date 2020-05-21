#include<iostream>
#include <algorithm>

//class Solution {
//public:
//	int counter = 0;
//	int climbStairs(int n) {
//		int result = _solver(n);
//		return counter;
//	}
//	int _solver (int n) {
//		if (n <= 1) {
//			counter += 1;
//			return 0;
//		}
//		return std::min(1 + climbStairs(n - 1), 2 + climbStairs(n - 2));
//	}
//};

//class Solution {
//public:
//	int climbStairs(int n) {
//		int couter = 0;
//		for (size_t i = 0; i <= n/2; i++)
//		{
//			int number_step2 = i;
//			int number_step1 = n - 2 * i;
//			if (number_step2 > number_step1) couter += C(number_step1, number_step2 + 1);
//			else if (number_step2 <= number_step1) couter += C(number_step2, number_step1 + 1);
//		}
//		return couter;
//	}
//private:
//	int C(int k, int n) {
//		int result_N_min_K_factorial = 1;
//		int result_K_factorial = 1;
//		for (int i = n - k + 1; i <= n; i++) {
//			result_N_min_K_factorial *= i;
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			result_K_factorial *= i;
//		}
//		return result_N_min_K_factorial / result_K_factorial;
//	}
//};

class Solution {
public:
	int climbStairs(int n) {
		int* f = new int[n + 1];
		f[0] = 1;
		f[1] = 1;
		for (int i = 2; i < n + 1; i++) {
			f[i] = f[i - 1] + f[i - 2];
		}
		return f[n];
	}
};

int main()
{
	Solution ss;
	std::cout << ss.climbStairs(6);
	return 0;
}