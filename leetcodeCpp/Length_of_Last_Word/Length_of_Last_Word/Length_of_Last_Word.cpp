/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', 
return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

*/

#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
	int lengthOfLastWord(string s) {
		int i = s.length() - 1;

		//Shift i to the last word
		while (i >= 0 && s[i] == ' ')
		{
			--i;
		}

		//last word length
		int length = 0;
		while (i >= 0 && s[i] != ' ')
		{
			++length;
			--i;
		}

		return length;

	}
};


int main() {
	Solution solobject;
	string s = " He llo World   ";
	int length;

	length = solobject.lengthOfLastWord(s);
	//cout << length << endl;
	system("pause");
	return 0;
}




