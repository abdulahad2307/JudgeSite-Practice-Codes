# -*- coding: utf-8 -*-
"""
Created on Tue Aug 20 00:15:11 2019

@author: AHAD
"""

def insertionSort(lists):
	i=0
	while i <= len(lists)-1:
		blank = i;
		item = lists[i]
		while blank > 0 and lists[blank-1]  > item:
			lists[blank] = lists[blank-1]
			blank-=1
		lists[blank] = item
		i+=1
	return lists

def mergeSort(arr, n):
    if n == 1: return arr
    len_half = int(n/2)
    return merge(mergeSort(arr[:len_half], len_half),
            mergeSort(arr[len_half:], n - len_half), n)

def merge(arr1, arr2, n):
    result = []
    i,j = 0,0
    for x in range(n):
        if len(arr1) <= i:
            result.extend(arr2[j:])
            return result
        elif len(arr2) <= j:
            result.extend(arr1[i:])
            return result
        elif arr1[i] < arr2[j]:
            result.append(arr1[i])
            i += 1
        elif arr2[j] < arr1[i]:
            result.append(arr2[j])
            j += 1
    #print(result)
    return result


def main():
    with open("StudentInfo.txt") as f:
        list = [line.split() for line in f]
        print(list)
        
    value = input("Enter a value of sorting algorithm you wanted to use\n 1. Insertion Sort\n 2. Merge Sort\n 3. Randomized Quick Sort\n 4. Heap Sort\n")
    
    if value == '1':
        print("Insertion Sort")
        print(insertionSort(list))
    elif value == '2':
        print("Merge Sort")
        print(mergeSort(list,len(list)))
    elif value == '3':
        print("Randomized Quick Sort")
    elif value == '4':
        print("Heap Sort")
    else:
        print("None")
        
    
main()
