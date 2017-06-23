#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long int n,s,m;
		cin>>n>>m>>s;
        if(((s+m-1)%n)==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<((s+m-1)%n)<<endl;
        }
	}
}

