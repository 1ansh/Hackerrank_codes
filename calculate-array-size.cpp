#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n,i,prod=1;
	cin>>n;
	long int d[n];
	double ans;
	for(i=0;i<n;i++)
	{
		cin>>d[i];
		prod=prod*d[i];
	}
	ans=prod*4/1024;
	cout<<ans;
}

