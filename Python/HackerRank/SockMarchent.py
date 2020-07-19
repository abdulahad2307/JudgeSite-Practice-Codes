#!/bin/python3

import math
import os
import random
import re
import sys


# Complete the sockMerchant function below.
def sockMerchant(n, ar):

    spc = 0
    list_set = set(ar) 
    unique_list = (list(list_set))

    #print(unique_list)

    for i in unique_list:
        count = 0 
        for j in ar:
            #print(i,j)
            if (i == j):
                count = count+1
                #print(count)
            
        spc = spc + int(count/2)
        #print(spc)
    
    return int(spc)




if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
