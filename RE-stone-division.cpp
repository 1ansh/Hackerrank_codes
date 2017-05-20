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
	int m,M,i;
	unsigned long long int n,a[m],l=0,j=0,y,z,x,b,count=0;
	cin>>n;
	cin>>m;
	M=m;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<M;i++)
	{
		for(b=0;b<M;b++)
		{
			if(n%a[i]==0)
			{
				if(a[b]==n/a[i])
				{
					if(a[i]%2!=0)
					{
						l++;
					}
					else if(a[i]%2==0)
					{
						j++;
					}
				}
				else
				{
					count++;
				}
			}
		}
		if(count==M)
		{
			j++;
			break;
		}
		count=0;
	}
//	cout<<j<<endl<<l;
	if(j>0)
	{
		cout<<"First";
	}
	else
	{
		cout<<"Second";
	}
	
}

