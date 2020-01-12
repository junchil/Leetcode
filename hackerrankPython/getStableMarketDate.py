#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getStableMarketData' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY data
#  2. INTEGER x
#

def getStableMarketData(data, x):
    # Write your code here
    v = [abs(data[i+1]-data[i]) for i in range(len(data)-1)]
    print(v)
    if x < min(v) or x > max(v):
        return []
    a=0
    index=0
    position=0
    for i in range(len(v)):
        if v[i] <= x:
            index=index+1
        else:
            if index > a:
                a = index
                position = i
            index=0
    print(position)
    print(a)
    return data[position-a:position+1]


if __name__ == '__main__':
    data=[5, 1, 16, 16, 12, 5]

    x =25

    result = getStableMarketData(data, x)

    print(result)
