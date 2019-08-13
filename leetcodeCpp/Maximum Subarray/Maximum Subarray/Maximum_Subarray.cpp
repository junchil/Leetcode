/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.

*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.empty()) {
			return 0;
		}
		int current = nums[0];
		int max = nums[0];
		int n = nums.size();
		for (int i = 1; i < n; i++) {
			current = std::max(current + nums[i], nums[i]);
			max = std::max(current, max);
		}
		return max;
	}
};












