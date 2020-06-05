#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int numIslands(vector<vector<char>>& grid) {
		// when i is zero
		int result = 0;
		vector<pair<int, int>> center_pair_vector;
		center_pair_vector.push_back(pair<int, int>{0, 0});
		pair<int, int> center;

		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid[0].size(); j++)
			{
				if (grid[i][j] == '1')
				{
					depthFirstSearch(grid, i, j);
					result++;
				}
			}
		}
		return result;
	}
private:
	void depthFirstSearch( vector<vector<char>>& grid, int row, int col) {
		if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == '0') return;
		grid[row][col] = '0';
		depthFirstSearch(grid, row + 1, col);
		depthFirstSearch(grid, row - 1, col);
		depthFirstSearch(grid, row, col + 1);
		depthFirstSearch(grid, row, col - 1);
	}
};

//int main()
//{
//	vector<vector<char>> grid{ {'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'} };
//	Solution ss;
//	cout << ss.numIslands(grid);
//}