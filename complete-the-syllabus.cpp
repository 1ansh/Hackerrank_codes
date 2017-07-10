#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,m;
    cin>>t;
    for(m=0;m<t;m++)
    {
    	int n,i,ans,sum=0;
    	cin>>n;
    	vector<int> ar(7);
    	for(i=0;i<7;i++)
    	{
    		cin>>ar[i];
    		sum=sum+ar[i];
		}
		int temp=n/sum;
		n=n-(temp-1)*sum;
		i=0;
		while(n>0)
		{
			n=n-ar[i];
			if(n<=0)
			{
				ans=i;
				break;
			}
			i=(i+1)%7;
		}
		switch(ans)
		{
			case 0:
				cout<<"MONDAY"<<endl;
				break;
			case 1:
				cout<<"TUESDAY"<<endl;
				break;
			case 2:
				cout<<"WEDNESDAY"<<endl;
				break;
			case 3:
				cout<<"THURSDAY"<<endl;
				break;
			case 4:
				cout<<"FRIDAY"<<endl;
				break;
			case 5:
				cout<<"SATURDAY"<<endl;
				break;
			case 6:
				cout<<"SUNDAY"<<endl;
				break;
		}
	}
}

