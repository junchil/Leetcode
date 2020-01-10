#https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumAbsoluteDifference function below.
def minimumAbsoluteDifference(arr):
    arr.sort()
    min = arr[1] - arr[0]
    for i in range(len(arr)-1):
        if arr[i+1] - arr[i] < min:
            min = arr[i+1] - arr[i]
        else:
            min = min
    return min

if __name__ == '__main__':
    arr=[-59, -36, -13, 1, -53, -92, -2, -96, -54, 75]

    result = minimumAbsoluteDifference(arr)
    
    print(result)
