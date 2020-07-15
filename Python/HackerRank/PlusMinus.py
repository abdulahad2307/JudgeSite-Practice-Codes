
import math
import os
import random
import re
import sys

def plusMinus(arr):
    l = len(arr)
    pcount = 0
    ncount= 0
    zcount = 0

    for i in arr:
        if (i > 0):
            pcount = pcount + 1
        elif (i < 0):
            ncount = ncount + 1
        elif (i==0):
            zcount = zcount + 1
    
    pp = float(pcount/l)
    np = float(ncount/l)
    zp = float(zcount/l)
    
    return print("{:.6f}".format(pp)+'\n'+"{:.6f}".format(np)+'\n'+"{:.6f}".format(zp))


    

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
