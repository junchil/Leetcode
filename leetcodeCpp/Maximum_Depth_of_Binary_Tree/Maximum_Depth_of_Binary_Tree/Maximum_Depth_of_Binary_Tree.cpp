/*

Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from 
the root node down to the farthest leaf node.

For example:
Given binary tree [3,9,20,null,null,15,7],

3
/ \
9  20
/  \
15   7
return its depth = 3.

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
	int maxDepth(TreeNode *root) {
		if (!root) {
			return 0;
		}

		int leftmax = maxDepth(root->left);
		int rightmax = maxDepth(root->right);

		return max(leftmax, rightmax) + 1;
	}
};