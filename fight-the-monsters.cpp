#include <iostream>
#include <cstring>
using namespace std;

void quickSort(long long int arr[], long long int left, long long int right) {
      long long int i = left, j = right;
      long long int tmp;
      long long int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main()
{
	long long int n,hit,t,i,temp,j=0,count=0,kill=0;
	cin>>n;
	cin>>hit;
	cin>>t;
	long long int h[n],min=0;
	for(i=0;i<n;i++)
	{
		cin>>h[i];
	}
	quickSort(h,0,n-1);
	while(count<t)
	{
		if(h[j]>0)
		{
			h[j]=h[j]-hit;
		}
		else if(j<n-1)
		{
			j=j+1;
			h[j]=h[j]-hit;
		}
        else
        {
            break;    
        }
		count++;
		//cout<<j<<endl;
	}
	if(h[j]<=0)
	{
		cout<<j+1<<endl;
	}
	else
	{
		cout<<j<<endl;
	}
}

