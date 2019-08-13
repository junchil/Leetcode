"""
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false

"""



class Solution(object):
	def isPalindrome(self, s):

		if s == '':
			return True
		else:
			sTemp = ''
			for i in range(0, len(s)):
				if s[i] >= 'a' and s[i] <= 'z' or s[i] >= '0' and s[i] <= '9' or s[i] >= 'A' and s[i] <= 'Z':
					sTemp += s[i]
			sTemp = sTemp.lower()
			for i in range(0, len(sTemp)/2):
				if sTemp[i] != sTemp[len(sTemp) - i - 1]:
					return False
			return True

if __name__ == "__main__":
	s = "A man, a plan, a canal: Panama"
	print Solution().isPalindrome(s)
































































