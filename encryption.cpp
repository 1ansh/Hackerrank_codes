#include <bits/stdc++.h>

using namespace std;


int main()
{
    string str;
    getline(cin,str);
    str.erase(std::remove(str.begin(),str.end(),' '),str.end());
    int i,j,n=str.length();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n)) 
		column = row;
	else 
		column = row + 1;
    for(int j=0;j<column;++j) 
	{
        for(int i=j; i<n;i+=column)
			cout << str[i];
        cout << ' ';
    }
    return 0;
}

