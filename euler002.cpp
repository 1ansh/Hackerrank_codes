#include <bits/stdc++.h>

using namespace std;

long long ans(long long n)
{
	long long sum=0;
	long long fib[100];
	fib[0]=1;fib[1]=1;
	int i = 1;
	while(fib[i]<=n)
	{
		if(fib[i]%2==0)
		{
			sum = sum + fib[i];
		}
		i++;
		fib[i]=fib[i-1]+fib[i-2];
	}
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
