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
	int n,c,m,flag=0;
	cin>>n;
	cin>>c;
	cin>>m;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>m*c)
		{
			flag++;
		}
	}
	if(flag>0)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
}
