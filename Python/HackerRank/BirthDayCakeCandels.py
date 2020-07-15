
import math
import os
import random
import re
import sys

def birthdayCakeCandles(ar):
    m = max(ar)
    print(m)

    count = 0 
    for i in ar:
        if i == m:
            count = count + 1
    
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
