#include <bits/stdc++.h>
using namespace std;



int main() 
{
    long long n, k,i; cin >> n >> k;
    vector<int> prices;
    for(i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0,sum=0;
    i=0;
    sort(prices.begin(),prices.end());
    while(sum<=k)
    {
    	sum=sum+prices[i];
    	i++;
    	if(sum<=k)
    	{
    		answer++;
		}
	}
    
    cout << answer << endl;
    
    return 0;
}
