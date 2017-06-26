#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,d,i,count=0;
    cin>>n>>d;
    vector<int> ar(n);
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		if(binary_search(ar.begin(),ar.end(),ar[i]+d) && binary_search(ar.begin(),ar.end(),ar[i]+2*d))
		{
			count++;
		}
	}
	cout<<count<<endl;
    return 0;
}

