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


void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
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

void quickSort(int arr[], int start,int end,int n)
{
	if(start<end)
	{
		int pIndex=partition(arr,start,end);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		quickSort(arr,start,pIndex-1,n);
		quickSort(arr,pIndex+1,end,n);		
	}
}


int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr,0,n-1,n);

    return 0;
}
