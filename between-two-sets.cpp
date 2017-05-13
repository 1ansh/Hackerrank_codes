#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n,m,i,mina,maxb,count1=0,j,count2=0;
    cin >> n >> m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(i=0;i<m;i++)
    {
    	cin>>b[i];
	}
	mina=a[0];
	maxb=b[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<mina)
		{
			mina=a[i];
		}
	}
	for(i=0;i<m;i++)
	{
		if(b[i]>maxb)
		{
			maxb=b[i];
		}
	}
	for(i=mina;i<=maxb;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%a[j]==0)
			{
				count1++;
			}
		}
		for(j=0;j<m;j++)
		{
			if(b[j]%i==0)
			{
				count1++;
			}
		}
		if(count1==(m+n))
		{
			count2++;
		}
		count1=0;
	}
	cout<<count2;
    return 0;
}

