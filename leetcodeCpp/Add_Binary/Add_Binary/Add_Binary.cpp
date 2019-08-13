/*
Given two binary strings, return their sum (also a binary string).

For example,
a = "11"
b = "1"
Return "100".

*/

#include<iostream>
#include<string>


using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		string sum = "0";
		int n1 = a.size();
		int n2 = b.size();
		int n;
		int flag = 0;
		if (n1 >= n2) {
			n = n1;
			flag = 1;
		}
		else {
			n = n2;
		}

		//add one more '0'
		a = string(n - n1 + 1, '0').append(a);
		b = string(n - n2 + 1, '0').append(b);
		sum = string(n, '0').append(sum);
		
		int current_index = 0;
		int last_index = 0;

		for (int i = n; i >= 1; --i) {
			if (last_index == 0) {
				if (a[i] == '1' && b[i] == '1') {
					sum[i] = '0';
					current_index = 1;
				}
				else if (a[i] == '0' && b[i] == '1') {
					sum[i] = '1';
					current_index = 0;
				}
				else if (a[i] == '1' && b[i] == '0') {
					sum[i] = '1';
					current_index = 0;
				}
				else {
					sum[i] = '0';
					current_index = 0;
				}
			}
			else {
				if (a[i] == '1' && b[i] == '1') {
					sum[i] = '1';
					current_index = 1;
				}
				else if (a[i] == '0' && b[i] == '1') {
					sum[i] = '0';
					current_index = 1;
				}
				else if (a[i] == '1' && b[i] == '0') {
					sum[i] = '0';
					current_index = 1;
				}
				else{
					sum[i] = '1';
					current_index = 0;
				}
			}
			last_index = current_index;
		}

		if (current_index == 1) {
			sum[0] = '1';
		}
		else {
			sum.erase(0,1);
		}

		cout << sum << endl;
		return sum;
	}
};



int main() {
	string a = "100010";
	string b = "10";

	Solution solobject;
	solobject.addBinary(a,b);
	system("pause");
	return 0;
}
