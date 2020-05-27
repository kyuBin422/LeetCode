#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
	int maxValue;
public:
	int maxPathSum(TreeNode* root) {
		maxValue = INT_MIN;
		maxPathDown(root);
		return maxValue;
	}
private:
	int maxPathDown(TreeNode* node) {
		if (node == nullptr) return 0;
		int left = max(0, maxPathDown(node->left));
		int right = max(0, maxPathDown(node->right));
		maxValue = max(maxValue, left + right + node->val);
		return max(left, right) + node->val;
	}
};

//int main()
//{
//	Solution ss;
//}