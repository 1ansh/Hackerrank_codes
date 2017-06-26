#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int n,m,i,j;
	cin>>n;
	vector<int> a(n);
	vector<int> overall(10000,0);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		overall[a[i]]--;
	}
	cin>>m;
	vector<int> b(m);
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		overall[b[i]]++;
	}
	for(i=0;i<10000;i++)
	{
		if(overall[i]>0)
		{
			cout<<i<<" ";
		}
	}
    return 0;
}

