#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        if(y+z<x)
        {
        	x=y+z;
		}
		else if(x+z<y)
		{
			y=x+z;
		}
        cout<<b*x+w*y<<endl;
    }
    return 0;
}
