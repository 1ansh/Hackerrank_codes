#include <bits/stdc++.h>

using namespace std;

long long ans(long long n)
{
	long long p,sum;
	p=(n-1)/3;
	sum=3*p*(p+1)/2;
	p=(n-1)/5;
	sum = sum + 5*p*(p+1)/2;
	p=(n-1)/15;
	sum = sum - 15*p*(p+1)/2;
	return sum;
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
