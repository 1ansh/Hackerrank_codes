#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isLeap(int year)
{
	if(year%400==0)
	{
		return true;
	}
	else if(year%4==0 && year%100!=0)
	{
		return true;
	}
	return false;
}

string solve(int year)
{
	string s;
    if(year>=1919)
    {
    	if(isLeap(year))
    	{
    		s="12.09."+to_string(year);
		}
	}
}

int main() 
{
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

