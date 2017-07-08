#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
		int n,i,j;
		cin>>n;
		bool flag=true;
		string key;
		vector <string > ar;
		for(i=0;i<n;i++)
		{
			cin>>key;
			sort(key.begin(),key.end());
			ar.push_back(key);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n;j++)
			{
				if(ar[i][j]>ar[i+1][j])
				{
					flag=false;
					break;
				}
			}
			if(!flag)
			{
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
