#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Wed Mar  7 12:05:34 2018

@author: junchiliu

Given a 32-bit signed integer, 
reverse digits of an integer.
Note:
Assume we are dealing with an environment 
which could only hold integers 
within the 32-bit signed integer range. 
For the purpose of this problem, 
assume that your function 
returns 0 when the reversed integer overflows.
"""

def reverse(x):
        if x>=0:
            a = int(str(x)[::-1])
            if a >=2**31:
                return 0
            else:
                return a
        else:
            x=abs(x)
            a = int(str(x)[::-1])
            if a >2**31:
                return 0 
            else:
                return a*(-1)
    