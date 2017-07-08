#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n,i,j,count=0;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	i=0;j=0;
	while(i<n && j<n)
	{
		if(a[i] > b[j])
		{
			j++;
		}
		else if(a[i] < b[j])
		{
			i++;
		}
		else
		{
			count++;
			i++;
			j++;
		}
	}
	if(count==n)
	{
		count--;
	}
	else if(count<n)
	{
		count++;
	}
	cout<<count<<endl;
}
