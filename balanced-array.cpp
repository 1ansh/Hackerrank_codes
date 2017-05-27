#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	int n,i,j;
	cin>>n;
	int a[n],left=0,right=0,diff=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n/2;i++)
	{
		left=left+a[i];
	}
	for(i=n/2;i<n;i++)
	{
		right=right+a[i];
	}
	diff=abs(right-left);
	cout<<diff;
}

