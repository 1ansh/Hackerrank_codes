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
	int l,r,i,j,x,max=0;
	cin>>l;
	cin>>r;
	for(i=l;i<=r;i++)
	{
		for(j=i;j<=r;j++)
		{
			x=i^j;
			if(x>max)
			{
				max=x;
			}
		}
	}
	cout<<max;
}
