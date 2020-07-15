
import math
import os
import random
import re
import sys

def miniMaxSum(arr):
    arr2 = arr.copy()
    for i in range (0,len(arr)):
        arr2[i] = sum(arr)-arr[i]
    
    return print(min(arr2), max(arr2))


if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
