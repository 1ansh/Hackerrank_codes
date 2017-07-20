#include <bits/stdc++.h>

using namespace std;

long getWays(long n, vector < long > c,long m)
{
	long table[n+1][m],i;
	for(i=0;i<m;i++)
	{
		table[0][i]=1;
	}
	for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
 
            y = (j >= 1)? table[i][j-1]: 0;
 
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++)
	{
       cin >> c[c_i];
    }
    long ways = getWays(n, c, m);
    return 0;
}

