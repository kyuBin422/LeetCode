#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		int m = grid.size();
		int n = grid[0].size();
		for (int i = 1; i < n; i++) {
			grid[0][i] += grid[0][i - 1];
		}
		for (int i = 1; i < m; i++) {
			grid[i][0] += grid[i - 1][0];
			for (int j = 1; j < n; j++) {
				grid[i][j] += min(grid[i][j - 1], grid[i - 1][j]);
			}
		}
		return grid[m - 1][n - 1];
	}
//private:
//	int _solve_recursive(vector<vector<int>>& grid, int m, int n) {
//		if ((m == 0) &( n == 0)) {
//			return grid[0][0];
//		}
//		else if (m == 0)
//		{
//			return grid[0][n - 1];
//		}
//		else if (n == 0)
//		{
//			return grid[m - 1][0];
//		}
//
//		else
//		{
//			return grid[m][n] + min(_solve_recursive(grid, m - 1, n), _solve_recursive(grid, m, n - 1));
//		}
//	}
};

//int main()
//{
//	Solution ss;
//	int strs_list[3][3] = { {1,3,1} ,{1,5,1},{4,2,1} };
//	vector<vector<int>> grid;
//	for (int i=0; i<3;i++)
//	{
//		vector<int> sub_grid;
//		for (int j = 0; j < 3; j++) {
//			sub_grid.push_back(strs_list[i][j]);
//		}
//		grid.push_back(sub_grid);
//	}
//	cout<<ss.minPathSum(grid);
//	return 0;
//}