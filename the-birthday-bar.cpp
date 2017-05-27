#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int d,m,sum=0,count=0;
	cin>>d>>m;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<m;j++)
		{
			sum=sum+a[i+j];
		}
		if(sum==d)
		{
			count++;
		}
	}
	cout<<count;
}

