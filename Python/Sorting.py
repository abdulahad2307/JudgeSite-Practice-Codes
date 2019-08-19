# -*- coding: utf-8 -*-
"""
Created on Tue Aug 20 00:15:11 2019

@author: AHAD
"""
def insertionSort(to_sort):
	i=0
	while i <= len(to_sort)-1:
		blank = i;
		item = to_sort[i]
		while blank > 0 and to_sort[blank-1]  > item:
			to_sort[blank] = to_sort[blank-1]
			blank-=1
		to_sort[blank] = item
		i+=1
	return to_sort




def main():
    with open("StudentInfo.txt") as f:
        list = [line.split() for line in f]
        print(list)
        
    value = input("Enter a value of sorting algorithm you wanted to use\n 1. Insertion Sort\n 2. Merge Sort\n 3. Randomized Quick Sort\n 4. Heap Sort\n")
    
    if value == '1':
        print("Insertion Sort")
        insertionSort(list)
        print(list)    
    elif value == '2':
        print("Merge Sort")
    elif value == '3':
        print("Randomized Quick Sort")
    elif value == '4':
        print("Heap Sort")
    else:
        print("None")
        
    
main()
