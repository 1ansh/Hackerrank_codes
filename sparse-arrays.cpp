#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n,q,i,j,last=0;
    cin>>n;
    vector <string > ar;
    string s;
    for(i=0;i<n;i++)
    {
    	cin>>s;
    	ar.push_back(s);
	}
	cin>>q;
    for(i=0;i<q;i++)
    {
    	int count=0;
    	cin>>s;
    	for(j=0;j<n;j++)
    	{
    		if(ar[j]==s)
    		{
    			count++;
			}
		}
		cout<<count<<endl;
	}
    return 0;
}

