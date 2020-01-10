# https://www.hackerrank.com/challenges/beautiful-pairs/problem
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulPairs function below.
def beautifulPairs(A, B):
    arrA=[]
    arrB=[]
    result = 0
    for indexI in range (len(A)):
        for indexJ in range(len(B)):
            if A[indexI] == B[indexJ]:
                arrA.append(indexI)
                arrB.append(indexJ)
    print(arrA)
    print(arrB)   
    arrA = list(set(arrA))
    arrB = list(set(arrB))
    result= min(len(arrA)+1, len(A))
    return result

if __name__ == '__main__':

    A = [10, 11, 12, 5, 14]
    B = [8, 9, 11, 11, 5]

    result = beautifulPairs(A, B)
    print(result)