#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):

    hr = scores[0]
    lr = scores[0]
    bb = 0
    wb = 0

    for i in range (1,len(scores)):
        #print(hr,lr)
        if (scores[i]>hr):
            hr = scores[i]
            bb = bb + 1
            #print(hr, bb)
        elif(scores[i]<lr):
            lr = scores[i]
            wb = wb + 1
            #print(lr, wb)
    
    return [bb,wb]


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
