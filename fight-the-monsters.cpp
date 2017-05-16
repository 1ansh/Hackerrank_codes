#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	long long int n,hit,t,i,temp,j,count=0,kill=0;
	cin>>n;
	cin>>hit;
	cin>>t;
	long long int h[n],min=0;
	for(i=0;i<n;i++)
	{
		cin>>h[i];
	}
	while(count<t)
	{
		min=9999999999;
		for(i=0;i<n;i++)
		{
			if(h[i]<min && h[i]>0)
			{
				min=h[i];
				j=i;
			}
		}
		h[j]=h[j]-hit;
		if(h[j]<=0)
		{
			kill++;
		}
		count++;
	}
	cout<<kill<<endl;
}
