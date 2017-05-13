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
	int a[26],i,j,l,area,max;
	string  s;
	for(i=0;i<26;i++)
	{
		cin>>a[i];
	}
	cin>>s;
	l=s.length();
	int c[l];
	for(i=0;i<l;i++)
	{
		j=s[i];
		c[i]=j-97;
	}
    max=a[c[0]];
	for(i=0;i<l;i++)
	{
		if(a[c[i]]>max)
		{
			max=a[c[i]];
		}
	}
	area=max*l;
	cout<<area<<endl;
}

