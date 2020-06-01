#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
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
    vector<int> tree2vector;
	vector<int> tree2vector_level_number;
    int deepestLeavesSum(TreeNode* root) {
        posOrderTree(root, 0);
        int max_level_numer = INT_MIN;
        for (int v: tree2vector_level_number)
        {
            max_level_numer = max_level_numer >= v ? max_level_numer : v;
        }
        int result = 0;

		for (size_t i = 0; i < tree2vector_level_number.size(); i++)
		{
			result += tree2vector_level_number[i] == max_level_numer ? tree2vector[i] : 0;
		}
        return result;
    }

    int posOrderTree(TreeNode* root,int n)
    {
        if (root==NULL)
        {
            return 1;
        }
        posOrderTree(root->left, n + 1);
        posOrderTree(root->right, n + 1);
        tree2vector.push_back(root->val);
        tree2vector_level_number.push_back(n);
        cout << n << endl;
        return 0;

    }
};