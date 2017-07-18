#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,i,j;
    cin>>n>>t;
    vector<int> ar(n);
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
	}
	for(i=0;i<t;i++)
	{
		int en,ex,min=INT_MAX;
		cin>>en>>ex;
		for(j=en;j<=ex;j++)
		{
			if(ar[j]<min)
			{
				min=ar[j];
			}
		}
		cout<<min<<endl;
	}
    return 0;
}
