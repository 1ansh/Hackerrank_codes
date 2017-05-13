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
	long long int q,i,dist;
	cin>>q;
	for(i=0;i<q;i++)
	{
		long long int a,b,d,s,m;
		long double z;
		cin>>a>>b>>d;
		m=max(a,b);
		if(d==0)
		{
			s=0;
			cout<<s<<endl;
		}
		else if(d%a==0||d%b==0)
		{
			if(d%a==0)
			{
				cout<<d/a<<endl;
			}
			else
			{
				cout<<d/b<<endl;
			}
		}
		else
		{
			if(a>(d/2)||b>(d/2))
			{
				s=2;
				cout<<s<<endl;
			}
			else
			{
				z=(float)d/(float)m;
				cout<<ceil(z)<<endl;
			}
		}
	}
}

