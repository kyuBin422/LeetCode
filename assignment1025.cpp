#include <iostream>

class Solution {
public:
	bool divisorGame(int N) {
		if (N % 2 == 1) return false;
		else if (N % 2 == 2) return true;
		return true;
	}
};