#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>


using namespace std;


int main()
{
	int m,n,l;
	cin>>m>>n;
	if(m%2!=0&&n%2==0)
	{
		l=(n*(m+1)/4);
		cout<<l;
	}
	if(m%2!=0&&n%2!=0)
	{
		n=n+1;
		l=(n*(m+1)/4);
		cout<<l;
	}
	if(m%2==0&&n%2!=0)
	{
		l=(m*(n+1)/4);
		cout<<l;
	}
	if(m%2==0&&n%2==0)
	{
		l=(m*n/4);
		cout<<l;
	}
}

