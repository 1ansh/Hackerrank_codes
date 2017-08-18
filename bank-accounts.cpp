#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	float n,k,x,d,i,j,sum1=0;
    	cin>>n>>k>>x>>d;
    	vector<float> p(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>p[i];
    		p[i] = max(k,x*p[i]/100);
    		sum1+=p[i];
		}
		if(sum1<=d)
		{
			cout<<"fee"<<endl;
		}
		else
		{
			cout<<"upfront"<<endl;
		}
	}
 
   return 0;
}
