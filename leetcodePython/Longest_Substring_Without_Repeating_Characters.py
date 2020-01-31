# https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        for maxlen in range(len(s)+1):
            for i in range(len(s)):