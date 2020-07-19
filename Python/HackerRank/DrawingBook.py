#!/bin/python3

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    
    if(n%2 == 0):
        fcount = int(p/2)
        bcount = int(n/2-p/2+1/2)
    else:
        fcount = int(p/2)
        bcount = int(n/2-p/2)

    return min(fcount,bcount)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
