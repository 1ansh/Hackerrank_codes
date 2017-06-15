#include <bits/stdc++.h>

using namespace std;


int main()
{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++)
	{
        int x,y,z,dis1,dis2;
        cin >> x >> y >> z;
        dis1=abs(x-z);
        dis2=abs(y-z);
        if(dis1>dis2)
        {
        	cout<<"Cat A"<<endl;
		}
		else if(dis1<dis2)
		{
			cout<<"Cat B"<<endl;
		}
		else
		{
			cout<<"Mouse C"<<endl;
		}
    }
    return 0;
}

