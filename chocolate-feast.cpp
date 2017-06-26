#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n,m,c,wrappers,count;
        cin >> n >> c >> m;
        count=n/c;
        wrappers=count;
        while(wrappers<m)
        {
        	count+=wrappers/m;
        	wrappers=wrappers/m+wrappers%m;
		}
		cout<<count<<endl;
    }
    return 0;
}
