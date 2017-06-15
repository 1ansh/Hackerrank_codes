#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,count=0;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++)
	{
       cin >> height[height_i];
       if(height[height_i]>k)
       {
       		count+=height[height_i]-k;
       		k=height[height_i];
	   }
    }
    cout<<count;
    return 0;
}

