/*
Given an array and a value, 
remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, 
you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. 
It doesn't matter what you leave beyond the new length.

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		if (nums.empty()) {
			return 0;
		}
		int index = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != val) {
				nums[index] = nums[i];
				++index;
			}
		}
		return index;
	}
};


int main() {
	vector<int> A{ 1,1,2,3 };
	int val = 3;
	Solution solobject;
	int index = solobject.removeElement(A, val);
	cout << index << endl;
	system("pause");
	return 0;
}



