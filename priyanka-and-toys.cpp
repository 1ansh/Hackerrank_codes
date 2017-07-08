#include <bits/stdc++.h>
using namespace std;



int main() 
{
    int n,i;
    cin>>n;
    vector<int> ar(n);
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	int thres=ar[0]+4,count=1;
	for(i=1;i<n;i++)
	{
		if(ar[i]<=thres)
		{
			continue;
		}
		else
		{
			count++;
			thres=ar[i]+4;
		}
	}
	cout<<count<<endl;
}
