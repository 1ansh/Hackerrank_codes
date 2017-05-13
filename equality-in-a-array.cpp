#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
	int n,i,j,max;
	cin>>n;
	int c[n],count[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(c[i]==c[j])
			{
				count[i]++;
			}
		}
	}
	max=count[0];
	for(i=0;i<n;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	cout<<n-max;
}