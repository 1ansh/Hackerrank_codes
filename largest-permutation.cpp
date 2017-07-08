#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    return a<b?a:b;
}

bool myfunc(int a, int b)
{
    return a>b;
}

int main() 
{
    int n,k,i,j;
    cin>>n>>k;
    vector<int> ar(n);
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]!=n-i&&k!=0)
		{
			j=i+1;
			while(ar[j]!=n-i)
				j++;
			int temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			k--;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
