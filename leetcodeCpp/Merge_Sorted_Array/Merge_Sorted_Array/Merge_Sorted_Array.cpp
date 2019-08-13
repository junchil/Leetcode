/*
Given two sorted integer arrays nums1 and nums2, 
merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to 
hold additional elements from nums2. 

The number of elements initialized in nums1 and nums2 are m and n respectively.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int i = m-1;
		int j = n-1;
		int h = m + n - 1;

		while (i >= 0 && j >= 0) {
			if (nums2[j] >= nums1[i]) {
				nums1[h] = nums2[j];
				--j;
			}
			else {
				nums1[h] = nums1[i];
				--i;
			}
			--h;
		}

		while (i >= 0) {
			nums1[h] = nums1[i];
			--i;
			--h;
		}
		while (j >= 0) {
			nums1[h] = nums2[j];
			--j;
			--h;
		}
	}
};



int main() {
	vector<int> nums1(15);
	nums1[0] = 1;
	nums1[1] = 4;
	nums1[2] = 4;
	nums1[3] = 8;
	nums1[4] = 12;
	nums1[5] = 13;
	vector<int> nums2 = { 4,6,7,9,10,12,15,16,20 };
	Solution solobject;
	solobject.merge(nums1, 6, nums2, 9);
	for (int i = 0; i < nums1.size(); ++i) {
		cout << nums1[i] << endl;
	}
	system("pause");
	return 0;
}