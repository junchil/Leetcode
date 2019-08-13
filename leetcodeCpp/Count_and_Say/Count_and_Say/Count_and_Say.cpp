/*
The count-and-say sequence is the sequence of integers with 
the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		if (n<1) return "";
		string ret = "1";
		for (int i = 2; i <= n; i++) {
			string temp = "";
			int count = 1;
			char prev = ret[0];
			for (int j = 1; j<ret.size(); j++) {
				if (ret[j] == prev)
					count++;
				else {
					temp += to_string(count);
					temp.push_back(prev);
					count = 1;
					prev = ret[j];
				}
			}
			temp += to_string(count);
			temp.push_back(prev);
			ret = temp;
		}
		return ret;
	}
};




int main() {
	string a;
	Solution solobject;
	a = solobject.countAndSay(6);
	cout << a << endl;
	system("pause");
	return 0;
}

