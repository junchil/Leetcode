/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps.
In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.


Example 1:

Input: 2
Output:  2
Explanation:  There are two ways to climb to the top.

1. 1 step + 1 step
2. 2 steps
Example 2:

Input: 3
Output:  3
Explanation:  There are three ways to climb to the top.

1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

*/

#include<iostream>

using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		int S;
		if (n == 0) {
			S=0;
		}
		if (n == 1) {
			S=1;
		}
		if (n == 2) {
			S = 2;
		}
		int S1 = 2, S2 = 1;
		for (int i = 3; i <= n; i++) {
			S = S1 + S2;
			S2 = S1;
			S1 = S;
		}
		return S;
	}
};

int main() {
	Solution solobject;
	cout << solobject.climbStairs(20) << endl;
	system("pause");
	return 0;
}