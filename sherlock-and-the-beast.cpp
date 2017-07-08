#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
		int n,dup,num5,num3,i;
		cin>>n;
		dup=n;
		if(dup%3==0)
		{
			num5=dup;
			num3=0;
		}
		else if(dup%3==1)
		{
			if(dup-10<0)
			{
				cout<<"-1"<<endl;
				continue;
			}
			num5=dup-10;
			num3=10;
		}
		else
		{
			if(dup-5<0)
			{
				cout<<"-1"<<endl;
				continue;
			}
			num5=dup-5;
			num3=5;
		}
		cout<<string(num5,'5')<<string(num3,'3')<<"\n";
	}
}
