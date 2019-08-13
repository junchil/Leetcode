/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, 
or -1 if needle is not part of haystack.

*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		if (haystack.empty()) {
			return -1;
		}
		if (needle.empty()) {
			return 0;
		}
		if (haystack.size() < needle.size()) {
			return-1;
		}
		for (int i = 0; i <= haystack.size()- needle.size(); ++i) {
			int j = 0;
			for (j = 0; j < needle.size(); ++j) {
				if (haystack[i + j] != needle[j]) {
					break;
				}
			}
			if (j == needle.size()) {
				return i;
			}
		}
		return -1;

	}
};


int main() {
	string haystack = "hello"; 
	string needle = "ll";
	Solution solobject;
	int num;
	num = solobject.strStr(haystack, needle);
	cout << num << endl;
	system("pause");
	return 0;
}

