/*

Given a binary tree, check whether it is a mirror of itself 
(ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

1
/ \
2   2
/ \ / \
3  4 4  3

But the following [1,2,2,null,3,null,3] is not:

1
/ \
2   2
\   \
3    3

*/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};

class Solution {
public:
	bool isSymmetric(TreeNode *root) {
		if (!root) {
			return true;
		}
		return check_Symmetric(root->left, root->right);
	}

	bool check_Symmetric(TreeNode *left, TreeNode *right) {
		if (!left && !right) {
			return true;
		}
		if ((!left && right) || (left && !right) || (left->val != right->val)) {
			return false;
		}
		return check_Symmetric(left->left, right->right) && check_Symmetric(left->right, right->left);
	}
		
};


