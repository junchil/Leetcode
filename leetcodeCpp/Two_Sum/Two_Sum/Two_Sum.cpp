/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> index;
		for (int i = 0; i < nums.size() - 1; i++) {
			for (int j = i+1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					index.push_back(i);
					index.push_back(j);
					return index;
				}
			}
		}

	}
};

int main() {
	vector<int> nums;
	nums = { 2,4,5,8,0,11,34,244 };
	int target = 8;
	vector<int> index;

	Solution solutionObject;
	index = solutionObject.twoSum(nums, target);
	cout << "the result is "<<endl;
	for (unsigned i = 0; i < index.size(); i++) {
		cout << index[i] << endl;
	}
	system("pause");
	return 0;

}



