import math
import os
import random
import re
import sys

# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    l = len(arr[0])
    di1 = 0
    di2 = 0
    
    for i in range(l):
        di1 = di1 + arr[i][i]
        di2 = di2 + arr[i][(l-i-1)]
    
    result = abs(di1-di2)
    print(result)
    return result


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
