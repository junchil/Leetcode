/*
Given a sorted array and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

*/


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (nums.empty()) {
			return -1;
		}
		int len = nums.size();
		int i = 0;
		for (i = 0; i < len; ++i) {
			if (target <= nums[i]) {
				break;
			}
		}
		return i;

	}
};