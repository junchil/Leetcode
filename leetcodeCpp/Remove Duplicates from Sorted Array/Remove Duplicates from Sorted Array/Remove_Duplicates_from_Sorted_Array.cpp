/*
Given a sorted array, remove the duplicates in-place such that each element 
appear only once and return the new length.

Do not allocate extra space for another array, 
you must do this by modifying the input array in-place with O(1) extra memory.
*/


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty()) {
			return 0;
		}
		int size = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[size] != nums[i]) {
				nums[++size]=nums[i];
			}
		}
		return size + 1; 
	}
};


int main() {
	Solution solObject;
	vector<int> A{ 1,1,1,2,3 };
	int size;
	size= solObject.removeDuplicates(A);
	cout << size << endl;
	system("pause");
	return 0;
}

