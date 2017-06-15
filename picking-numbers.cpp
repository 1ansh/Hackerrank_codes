#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,i,j,count1=1,count2=1,count=1,max=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++)
	{
       cin >> a[a_i];
    }
    for(i=0;i<n;i++)
    {
    	count1=1;
    	count2=1;
    	count=1;
    	for(j=0;j<n;j++)
    	{
    		if((a[i]-a[j]==1 || a[i]-a[j]==0) && i!=j)
    		{
    			count1++;
			}
			else if((a[i]-a[j]==-1 || a[i]-a[j]==0) && i!=j)
    		{
    			count2++;
			}
		}
		count=count1>=count2?count1:count2;
		if(count>max)
		{
			max=count;
		}
	}
	cout<<max;
    return 0;
}

