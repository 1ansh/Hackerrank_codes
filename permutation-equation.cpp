#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int p[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	int x,y;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=n;y++)
		{
			if(p[p[y]]==x)
			{
				cout<<y<<endl;
				break;
			}
		}
	}
}

