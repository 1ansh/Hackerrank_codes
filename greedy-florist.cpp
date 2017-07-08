#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int n, int k, vector < int > c)
{
    int i,sum=0;
	i=n-1;
	int count=0,x=0;
	while(i>=0)
	{
		if(count==k)
		{
			count=0;
			x++;
		}
		sum=sum+(x+1)*c[i];
		count++;
		i--;
	}
	return sum;
}

int main() {
    int n;
    int k,sum=0;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++)
	{
       cin >> c[c_i];
       sum = sum + c[c_i];
    }
    if(k>=n)
    {
    	cout << sum << endl;
 	}
 	else
 	{
 		sort(c.begin(),c.end());
	    int minimumCost = getMinimumCost(n, k, c);
	    cout << minimumCost << endl;
	}
    return 0;
}

