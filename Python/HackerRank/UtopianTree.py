#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the utopianTree function below.
def utopianTree(n):

    hcount = 1
    if n == 0:
        return 1
    else:
        for i in range(n):
            if(i+1)%2 != 0:
                hcount = hcount * 2
            else:
                hcount = hcount + 1
        return hcount


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = utopianTree(n)

        fptr.write(str(result) + '\n')

    fptr.close()
