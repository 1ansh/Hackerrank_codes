#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p)
{
    int fromfront=p/2;
    int fromback;
    if(n%2!=0)
    {
    	fromback=(n-p)/2;
	}
	else
	{
		if((n-p)%2!=0)
		{
			fromback=(n-p)/2+1;
		}
		else
		{
			fromback=(n-p)/2;
		}
	}
    return fromfront<=fromback?fromfront:fromback;
}

int main() 
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

