#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    
    count = 0
    l = len(c)
    i = 0
    while i < l-1:
        if (i+2<l and c[i+2]) == 0:
            i = i+2
            count = count + 1
        else:
            i = i+1
            count = count + 1
    
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c)

    fptr.write(str(result) + '\n')

    fptr.close()
