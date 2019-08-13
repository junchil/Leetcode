#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Wed Mar  7 12:58:00 2018

@author: junchiliu

Determine whether an integer is a palindrome. 
Do this without extra space.

"""

class Solution:
    def isPalindrome(self, x):
        self.x = x
        if self.x >= 0:
            if self.x >= 2**31:
                return False
            else:
                if self.x == int(str(self.x)[::-1]):
                    return True
                else:
                    return False
        else:
            return False    
