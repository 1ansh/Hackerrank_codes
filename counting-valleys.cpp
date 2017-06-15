#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,i,level=0,prev,valley=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
    	prev=level;
    	if(s[i]=='U')
    	{
    		level=level+1;
		}
		else if(s[i]=='D')
		{
			level=level-1;
		}
		if(level>=0 && prev<0)
		{
			valley++;
		}
	}
	cout<<valley;
    return 0;
}

