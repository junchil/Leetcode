/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		vector<char> stk;
		if (s.empty())
			return false;
		stk.push_back(s[0]);
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '{' || s[i] =='[') {
				stk.push_back(s[i]);
				continue;
			} 
			char current = stk.back();
			if (s[i] == ')' && current != '(')
				return false;
			if (s[i] == '}' && current != '{')
				return false;
			if (s[i] == ']' && current != '[')
				return false;
			stk.pop_back();
		}
		if (stk.size() != 0)
			return false;
		return true;
	}
};


int main() {
	string A;
	A = { "()[]{}" };
	Solution solutionobject;
	cout << solutionobject.isValid(A) << endl;
	system("pause");
	return 0;
}