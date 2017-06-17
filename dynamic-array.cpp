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
    int n,q,i,last=0;
    cin>>n>>q;
    vector <vector <int> > ar(n,vector <int> ());
    for(i=0;i<q;i++)
    {
    	int j,que,x,y,ind;
    	cin>>que>>x>>y;
    	if(que==1)
    	{
    		ind=((x^last)%n);
    		ar[ind].push_back(y);
		}
		else
		{
			ind=((x^last)%n);
			last=ar[ind][y%ar[ind].size()];
			cout<<last<<endl;
		}
	}
    return 0;
}

