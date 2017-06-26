#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,i,j=0;
	long mincal=0;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++)
	{
       cin >> calories[calories_i];
    }
    sort(calories.begin(),calories.end());
    for(i=n-1;i>=0;i--)
    {
    	mincal=mincal+(pow(2,j)*calories[i]);
    	j++;
	}
	cout<<mincal;
    return 0;
}

