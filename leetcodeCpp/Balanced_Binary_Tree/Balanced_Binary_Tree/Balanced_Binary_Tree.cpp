/*
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the depth of the two subtrees of 
every node never differ by more than 1.

Example 1:

Given the following tree [3,9,20,null,null,15,7]:

3
/ \
9  20
/  \
15   7
Return true.

Example 2:

Given the following tree [1,2,2,3,3,null,null,4,4]:

1
/ \
2   2
/ \
3   3
/ \
4   4
Return false.
*/


#include<iostream>
#include<algorithm>

using namespace std;


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};

class Solution {
public:
	bool isBalanced(TreeNode *root) {
		if (!root) {
			return true;
		}

		int leftDepth = maxDepth(root->left);
		int rightDepth = maxDepth(root->right);
		if (abs(leftDepth-rightDepth)>1) {
			return false;
		}

		return isBalanced(root->left) && (isBalanced(root->right));
	}

	int maxDepth(TreeNode *node) {
		if (!node) {
			return 0;
		}

		int leftmax = maxDepth(node->left);
		int rightmax = maxDepth(node->right);

		return max(leftmax, rightmax) + 1;
	}

};