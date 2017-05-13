#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
int answer(int n);
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,ans;
		cin>>n;
		ans=answer(n);
		cout<<ans<<endl;
	}
}
int answer(int n)
{
	int ans;
	if(n==0)
	{
		ans=1;
	}
	else if(n%2==0)
	{
		ans=answer(n-1)+1;
	}
	else if(n%2!=0)
	{
		ans=answer(n-1)*2;
	}
	return ans;
}
