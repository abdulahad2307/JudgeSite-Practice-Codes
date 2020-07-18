#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    apos = []
    opos = []
    acount = 0
    ocount = 0

    for i in apples:
        apos.append(a+i)
    #print(apos)

    for i in apos:
        if (i >= s and i<=t):
            acount = acount + 1
    
    for j in oranges:
        opos.append(b+j)
    #print(opos)

    for j in opos:
        if (j >= s and j<=t):
            ocount = ocount + 1
        
    print(acount)
    print(ocount)


if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
