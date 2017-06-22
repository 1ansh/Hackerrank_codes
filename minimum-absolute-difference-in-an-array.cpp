#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,j,k;
    cin>>n;
    vector<int> v;
    for(j=0;j<n;j++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int min=v[1]-v[0];
    for(j=1;j<n-1;j++)
    {
    	if(v[j+1]-v[j]<min)
    	{
    		min=v[j+1]-v[j];
		}
	}
    cout<<min<<endl;
    return 0;
}

