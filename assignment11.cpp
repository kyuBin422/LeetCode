#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int tmpMax = 0;
		for (int i = 0; i < height.size(); i++) {
			for (int j = i + 1; j < height.size(); j++) {
				int Height = (height[i] > height[j]) ? height[j] : height[i];
				if (tmpMax <= (Height * (j - i)))
				{
					tmpMax = Height * (j - i);
				}
			}
		}

		return tmpMax;
	}
};

//int main() {
//	int a[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
//	vector<int> height(a, a + size(a));
//	Solution ss;
//	int b = ss.maxArea(height);
//	cout << b;
//	return 0;
//}