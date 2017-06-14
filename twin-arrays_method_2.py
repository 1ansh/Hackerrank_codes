#!/bin/python3

import sys


def partition(arr,low,high):
    i = ( low-1 )         
    pivot = arr[high]   
 
    for j in range(low , high):
 

        if   arr[j] <= pivot:
         
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]
 
    arr[i+1],arr[high] = arr[high],arr[i+1]
    return ( i+1 ) 

def quickSort(arr,low,high):
    if low < high:
 

        pi = partition(arr,low,high)
 

        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)


def twinArrays(ar1, ar2,n):
    ar1_dup=ar1[:]
    ar2_dup=ar2[:]
    count=0
    quickSort(ar1_dup,0,n-1)
    quickSort(ar2_dup,0,n-1)
    if(ar1.index(ar1_dup[0])!= ar2.index(ar2_dup[0])):
        count=ar1_dup[0] + ar2_dup[0]
    else:
        if((ar1_dup[0]+ar2_dup[1])<=(ar1_dup[1]+ar2_dup[0])):
           count=ar1_dup[0]+ar2_dup[1]
        else:
           count=ar1_dup[1]+ar2_dup[0]
    return count
    

n = int(input().strip())
ar1 = list(map(int, input().strip().split(' ')))
ar2 = list(map(int, input().strip().split(' ')))
result = twinArrays(ar1, ar2,n)
print(result)
