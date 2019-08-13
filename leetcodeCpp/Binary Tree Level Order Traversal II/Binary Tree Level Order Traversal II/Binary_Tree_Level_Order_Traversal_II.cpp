/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. 
(ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
3
/ \
9  20
/  \
15   7
return its bottom-up level order traversal as:
[
[15,7],
[9,20],
[3]
]
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};

class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode *root) {
		vector<vector<int>> res;

		if (!root) {
			return res;
		}

		queue<TreeNode *> q;
		q.push(root);

		while (!q.empty()) {
			vector<int> levelvalue;
			int size = q.size();
			for (int i = 0; i < size; ++i) {
				TreeNode *levelroot = q.front();
				q.pop();
				levelvalue.push_back(levelroot->val);
				if (levelroot->left) {
					q.push(levelroot->left);
				}
				if (levelroot->right) {
					q.push(levelroot->right);
				}
			}
			res.insert(res.begin(), levelvalue);
		}
		return res;
	}
};