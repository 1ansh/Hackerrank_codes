#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s,int n,int m)
{
	int i,j,max=-1;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		if((keyboards[i]+drives[j])>max && (keyboards[i]+drives[j])<=s)
    		{
    			max=keyboards[i]+drives[j];
			}
		}
	}
	return max;
}

int main() 
{
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    int moneySpent = getMoneySpent(keyboards, drives, s,n,m);
    cout << moneySpent << endl;
    return 0;
}

