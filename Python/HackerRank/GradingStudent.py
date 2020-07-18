#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    fgrade = grades.copy()
    for i in range(0,len(grades)):
        d = math.ceil(grades[i]/5)
        r = grades[i]%5
        
        if grades[i] <38:
            fgrade[i] = grades[i]
        elif (grades[i] >= 38) & ((5-r) < 3):
            fgrade[i] = d * 5
        else:
            fgrade[i] = grades[i]
    
    return fgrade



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
