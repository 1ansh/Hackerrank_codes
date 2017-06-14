#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    int i,freq[5]={0,0,0,0,0},max,maxind;
    for(i=0;i<n;i++)
    {
    	freq[ar[i]-1]++;
	}
	max=freq[0];
	maxind=0;
	for(i=0;i<5;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			maxind=i;
		}
	}
	return maxind+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

