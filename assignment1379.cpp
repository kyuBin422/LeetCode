#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
	TreeNode* getTargetCopy(TreeNode* orig, TreeNode* clone, TreeNode* targ) {
		if (orig==NULL||orig==targ)
		{
			return clone;
		}
		TreeNode* res = getTargetCopy(orig->left, clone->left, targ);
		if (res!=NULL)
		{
			return res;
		}
		return getTargetCopy(orig->right, clone->right, targ);
	}
};