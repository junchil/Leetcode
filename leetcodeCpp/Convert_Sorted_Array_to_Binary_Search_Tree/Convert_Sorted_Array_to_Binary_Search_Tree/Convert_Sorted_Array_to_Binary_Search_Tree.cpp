/*
Given an array where elements are sorted in ascending order, 
convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in 
which the depth of the two subtrees of every node never differ by more than 1.


Example:

Given the sorted array: [-10,-3,0,5,9],

One possible answer is: [0,-3,9,-10,null,5], 
which represents the following height balanced BST:

0
/ \
-3   9
/   /
-10  5
*/

#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};

class Solution {
public:
	TreeNode * sortedArrayToBST(vector<int>& nums) {
		return ArrayToBST(nums, 0, nums.size() - 1);
	}

	TreeNode * ArrayToBST(vector<int>& nums, int start, int end) {
		if (start > end) {
			return NULL;
		}

		int mid = start + (end - start) / 2;
		TreeNode *root = new TreeNode;
		root->val = nums[mid];
		root->left = ArrayToBST(nums,start,mid-1);
		root->right = ArrayToBST(nums, mid + 1, end);
		return root;
	}
};