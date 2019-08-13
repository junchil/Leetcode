/*

Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
[1],
[1,1],
[1,2,1],
[1,3,3,1],
[1,4,6,4,1]
]

*/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		if (numRows == 0) {
			return {};
		}

		if (numRows == 1) {
			return result = { {1} };
		}
		
		if (numRows == 2) {
			return result = { {1},{1,1} };
		}

		result = { { 1 },{ 1,1 } };

		vector<int> res = { 1,1 };

		for (int i = 3; i <= numRows; ++i) {
			int prev = 1;
			for (int j = 1; j < i-1; ++j) {
				int tem = res[j];
				res[j] += prev;
				prev = tem;
			}
			res.push_back(1);
			result.push_back(res);
		}
		return result;
	}
};
