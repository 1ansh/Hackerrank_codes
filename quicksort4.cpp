#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int quickcount=0;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	quickcount++;
}
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int i,pIndex=start;
	for(i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(&arr[i],&arr[pIndex]);
			pIndex=pIndex+1;
		}
	}
	swap(&arr[end],&arr[pIndex]);
	return pIndex;
}

void quickSort(int arr[], int start,int end)
{
	if(start<end)
	{
		int pIndex=partition(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}


int insertionSort(int arr[],int n)
{
	int i,j,key,count=0;
	for(j=1;j<n;j++)
	{
		key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i--;
			count++;
		}
		arr[i+1]=key;
	}
	return count;
}

int main()
{
    int n;
    cin >> n;

    int arr[n],brr[n],insertion,quick;
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
        brr[i]=arr[i];
    }
    insertion=insertionSort(arr,n);
    quickSort(brr,0,n-1);
	cout<<insertion-quickcount<<endl;
    return 0;
}
