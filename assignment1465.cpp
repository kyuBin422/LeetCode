//5525
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Since the answer can be a huge number, return this modulo 10 ^ 9 + 7.
class Solution {
public:
	int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
		horizontalCuts.push_back(h);
		verticalCuts.push_back(w);
		sort(horizontalCuts.begin(), horizontalCuts.end());
		sort(verticalCuts.begin(), verticalCuts.end());
		long int max_horizon_cut = horizontalCuts[0];
		long int max_vertical_cut = verticalCuts[0];
		long int temp_cut;
		for (size_t i = 1; i < horizontalCuts.size(); i++) {
			temp_cut = horizontalCuts[i] - horizontalCuts[i - 1];
			max_horizon_cut = max_horizon_cut >= temp_cut ? max_horizon_cut : temp_cut;
		}
		for (size_t j = 1; j < verticalCuts.size(); j++)
		{
			temp_cut = verticalCuts[j] - verticalCuts[j - 1];
			max_vertical_cut = max_vertical_cut >= temp_cut ? max_vertical_cut : temp_cut;
		}
		return (max_horizon_cut * max_vertical_cut) % 1000000007;
	}
};

int main()
{
	int horizontalCuts2vector[] = { 3,1 };
	int verticalCuts2vector[] = { 1 };
	vector<int> horizontalCuts(horizontalCuts2vector, horizontalCuts2vector + size(horizontalCuts2vector));
	vector<int> verticalCuts(verticalCuts2vector, verticalCuts2vector + size(verticalCuts2vector));
	int h = 1000000000;
	int w = 1000000000;
	Solution ss;
	cout << ss.maxArea(h, w, horizontalCuts, verticalCuts);
	return 0;
};