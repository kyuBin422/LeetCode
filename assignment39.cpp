#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

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
            path.push_back(candidates[i]);
            DFS(i, target - candidates[i]);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        this->candidates = candidates;
        DFS(0, target);

        return res;
    }

};


int main() {
	int a[] = { 1,3,5,6 };
	vector<int> candidates(a, a + size(a));
	Solution ss;
	vector<vector<int>> result = ss.combinationSum(candidates, 2);
	return 0;
}