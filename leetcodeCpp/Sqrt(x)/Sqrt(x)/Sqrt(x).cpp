/*
Implement int sqrt(int x).

Compute and return the square root of x.

x is guaranteed to be a non-negative integer.

*/

#include<iostream>

using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		if (x <= 1) {
			return x;
		}
		int start = 0, end =x;
		while (start <= end) {
			int mid = start + (end - start) / 2;
			if (x / mid == mid) {
				return mid;
			}
			else if (x / mid > mid) {
				start = mid+1;
			}
			else {
				end = mid-1;
			}
		}
		return end;
	}
};


int main() {
	Solution solobject;
	cout << solobject.mySqrt(8) << endl;
	system("pause");
	return 0;
}











