#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n,i,sum;
	cin>>n;
	vector<int> ar(n);
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	i=0;
	while(i<=n-3)
	{
		sum=ar[n-1-i]-ar[n-2-i]-ar[n-3-i];
		if(sum<0)
		{
			cout<<ar[n-3-i]<<" "<<ar[n-2-i]<<" "<<ar[n-1-i]<<endl;
			break;
		}
		else
		{
			i++;
		}
	}
	if(i>n-3)
	{
		cout<<"-1"<<endl;
	}
}
