# -*- coding: utf-8 -*-
"""
Created on Tue Aug 20 00:15:11 2019

@author: AHAD
"""

import time


####********* INSERTION_SORT *********####

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




####********* MERGE_SORT *********####

def mergeSort(lists, n):
    if n == 1: return lists
    len_half = int(n/2)
    return merge(mergeSort(lists[:len_half], len_half),
            mergeSort(lists[len_half:], n - len_half), n)

def merge(lists1, lists2, n):
    result = []
    i,j = 0,0
    for x in range(n):
        if len(lists1) <= i:
            result.extend(lists2[j:])
            return result
        elif len(lists2) <= j:
            result.extend(lists1[i:])
            return result
        elif lists1[i] < lists2[j]:
            result.append(lists1[i])
            i += 1
        elif lists2[j] < lists1[i]:
            result.append(lists2[j])
            j += 1
    #print(result)
    return result

####********* RANDOMIZED_QUICK_SORT *********####
    
from random import randint

def randquicksort(lists, start, end):
	if start < end:
		pIndex = partition(lists, start, end)
		randquicksort(lists, start, pIndex-1)
		randquicksort(lists, pIndex+1, end)
	
	return lists

def partition(lists, start, end):
	pivot = randint(start, end)
	temp = lists[end]
	lists[end] = lists[pivot]
	lists[pivot] = temp
	pIndex = start
	
	for i in range(start, end):
		if lists[i] <= lists[end]:
			temp = lists[i]
			lists[i] = lists[pIndex]
			lists[pIndex] = temp
			pIndex += 1
	temp1 = lists[end]
	lists[end] = lists[pIndex]
	lists[pIndex] = temp1
	
	return pIndex

####********* HEAP_SORT *********####
    

def heapsort(lists):
    build_max_heap(lists)
    for i in range(len(lists) - 1, 0, -1):
        lists[0], lists[i] = lists[i], lists[0]
        max_heapify(lists, index=0, size=i)
 
def parent(i):
    return (i - 1)//2
 
def left(i):
    return 2*i + 1
 
def right(i):
    return 2*i + 2
 
def build_max_heap(lists):
    length = len(lists)
    start = parent(length - 1)
    while start >= 0:
        max_heapify(lists, index=start, size=length)
        start = start - 1
 
def max_heapify(lists, index, size):
    l = left(index)
    r = right(index)
    if (l < size and lists[l] > lists[index]):
        largest = l
    else:
        largest = index
    if (r < size and lists[r] > lists[largest]):
        largest = r
    if (largest != index):
        lists[largest], lists[index] = lists[index], lists[largest]
        max_heapify(lists, largest, size)


def main():
    start = time.time()
    with open("StudentInfo.txt") as f:
        list = [line.split() for line in f]
        print(list)
        
    value = input("Enter a value of sorting algorithm you wanted to use\n 1. Insertion Sort\n 2. Merge Sort\n 3. Randomized Quick Sort\n 4. Heap Sort\n")
    
    if value == '1':
        print("Insertion Sort")
        insertionSort(list)
        #print(list)
        with open('InsertionSortOutput.txt', 'w') as filehandle:
            for listitem in list:
                filehandle.write('%s\n' % listitem)
    elif value == '2':
        print("Merge Sort")
        #print(mergeSort(list,len(list)))
        with open('MergeSortOutput.txt', 'w') as filehandle:
            for listitem in mergeSort(list,len(list)):
                filehandle.write('%s\n' % listitem)
    elif value == '3':
        print("Randomized Quick Sort")
        randquicksort(list,0, len(list)-1)
        #print(list)
        with open('RandQuickSortOutput.txt', 'w') as filehandle:
            for listitem in list:
                filehandle.write('%s\n' % listitem)  
    elif value == '4':
        print("Heap Sort")
        heapsort(list)
        #print(list)
        with open('HeapSortOutput.txt', 'w') as filehandle:
            for listitem in list:
                filehandle.write('%s\n' % listitem)
    else:
        print("None")
    
    end = time.time()
    print("Execution time: ",end - start)
        
    
main()
