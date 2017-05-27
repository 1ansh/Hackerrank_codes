#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	long int t,j;
	cin>>t;
	for(j=0;j<t;j++)
	{
		long int n;
		cin>>n;
		if(n==1)
		{
			long int a[n],i;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			cout<<"YES"<<endl;
		}
		else
		{
			long int a[n],i,sum=0;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum=sum+a[i];
			}
			long int left=0,right=sum,flag=0,previous=0;
			for(i=0;i<n;i++)
			{
				left+=previous;
				previous=a[i];
				right-=a[i];
				if(right==left)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
    return 0;
}

