#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
	int n,d,i;
	cin>>n>>d;
	int a[n],b[n],diff;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		diff=i-d;
		if(diff<0)
		{
			b[n+diff]=a[i];
		}
		else
		{
			b[diff]=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	
    return 0;
}

