#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
//回溯算法使用，其中39与40题均为这种回溯题目
class Solution {
private:
	vector<int> candidates;
	vector<vector<int>> res;
	vector<int> path;
public:
	void DFS(int start, int target) {
		if (target == 0) {
			res.push_back(path);
			return;
		}
		for (int i = start;
			i < candidates.size() && target - candidates[i] >= 0; i++) {
			if (i > start) { if (candidates[i - 1] == candidates[i]) { continue; } }
			path.push_back(candidates[i]);
			DFS(i + 1, target - candidates[i]);
			path.pop_back();
		}
	}

	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		std::sort(candidates.begin(), candidates.end());
		this->candidates = candidates;
		DFS(0, target);

		return res;
	}

};


int main() {
	int a[] = { 10,1,2,7,6,1,5 };
	vector<int> candidates(a, a + size(a));
	Solution ss;
	vector<vector<int>> result = ss.combinationSum2(candidates, 8);
	return 0;
}