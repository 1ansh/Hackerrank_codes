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
	int n;
	cin>>n;
	int c[n],i,j,count=0;
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	j=0;
	while(j!=n-1)
	{
		if(c[j+2]==0 && j+2<n)
		{
			j=j+2;
			count++;
		}
		else
		{
			j=j+1;
			count++;
		}
	}
	cout<<count;
}

