#include <bits/stdc++.h>

using namespace std;

long long ans(long long n)
{
	vector<long long> fac;
	long long d=2,i,max=0;
	while(n>1)
	{
		while(n%d==0)
		{
			fac.push_back(d);
			n/=d;
		}
		d=d+1;
		if(d*d>n)
		{
			if(n>1)
			{
				fac.push_back(n);
			}
			break;
		}
	}
	for(i=0;i<fac.size();i++)
	{
		if(fac[i]>max)
		{
			max=fac[i];
		}
	}
	return max;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,sum;
		cin>>n;
		sum= ans(n);
		cout<<sum<<endl;
	}
}
