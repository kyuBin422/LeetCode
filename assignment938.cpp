#include <iostream>
using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:


	int rangeSumBST(TreeNode* root, int L, int R) {
		if (root==NULL)
		{
			return 0;
		}
		int result = 0;
		if (root->val > L)
		{
			result += rangeSumBST(root->left, L, R);
		}
		if (root->val < R)
		{
			result += rangeSumBST(root->right, L, R);
		}
		if (root->val >= L&& root->val <= R)
		{
			result += root->val;
		}
		return result;

	}
};