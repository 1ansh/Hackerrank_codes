#include <bits/stdc++.h>

using namespace std;



int main() {
    int n,i;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++)
	{
       cin >> c[c_i];
    }
    sort(c.begin(),c.end());
    int diff=INT_MAX;
    for(i=0;i<n-k+1;i++)
    {
    	if((c[i+k-1]-c[i])<diff)
    	{
    		diff=c[i+k-1]-c[i];
		}
	}
	cout<<diff<<endl;
}

