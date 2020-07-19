#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):

    tbill = 0

    for i in bill:
        tbill = tbill + i
    
    abill = (tbill - bill[k])/2

    if (b ==  abill ):
        print ('Bon Appetit')
    else:
        change = b - abill
        print(int(change))

if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)
