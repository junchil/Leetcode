/*

Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		if (rowIndex == 0) {
			return {1};
		}
		if (rowIndex == 1) {
			return { 1, 1 };
		}

		vector<int> res = { 1,1 };

		for (int i = 2; i <= rowIndex; ++i) {
			int prev = 1;
			for (int j = 1; j < i; ++j) {
				int temp = res[j];
				res[j] += prev;
				prev = temp;
			}
			res.push_back(1);
		}
		return res;
	}
};