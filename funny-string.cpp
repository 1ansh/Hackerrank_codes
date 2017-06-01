#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t,I;
	cin>>t;
	for(I=0;I<t;I++)
	{
		string s,r;
		cin>>r;
		s=r;
		reverse(r.begin(),r.end());
		int i,ssum,rsum,flag=0;
		for(i=1;i<s.size();i++)
		{
			ssum=abs(int(s[i])-int(s[i-1]));
			rsum=abs(int(r[i])-int(r[i-1]));
			if(ssum!=rsum)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Not Funny"<<endl;
		}
		else
		{
			cout<<"Funny"<<endl;
		}
	}
}
