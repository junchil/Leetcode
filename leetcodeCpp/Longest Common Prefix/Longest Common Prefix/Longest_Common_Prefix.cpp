/*
Write a function to find the longest common prefix string amongst an array of strings.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string comprefix;
		if (strs.empty())
			return comprefix;
		for (int i = 0; i<strs[0].size(); i++) {
			for (int j = 1; j<strs.size(); j++) {
				if (i >= strs[j].size() || strs[j][i] != strs[0][i])
					return comprefix;
			}
			comprefix.push_back(strs[0][i]);
		}
		return comprefix;
	}
};

int main() {
	vector<string> A;
	string comprefix;

	A = { "hello","hell","hel","e" };
	
	Solution solutionobject;
	comprefix = solutionobject.longestCommonPrefix(A);

	for (unsigned i = 0; i < comprefix.size(); i++) {
		cout << comprefix[i] << endl;
	}
	system("pause");
	return 0;
}