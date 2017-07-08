#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n,m,i,sum=0,key,imp;
	cin>>n>>m;
	vector<int> ar;
	for(i=0;i<n;i++)
	{
		cin>>key>>imp;
		if(imp==0)
		{
			sum=sum+key;
		}
		else
		{
			ar.push_back(key);
		}
	}
	sort(ar.begin(),ar.end());
	m=ar.size()-m;
	if(m<0)
	{
		m=0;
	}
	for(i=0;i<m;i++)
	{
		sum=sum-ar[i];
	}
	for(i=m;i<ar.size();i++)
	{
		sum=sum+ar[i];
	}
	cout<<sum<<endl;
}
