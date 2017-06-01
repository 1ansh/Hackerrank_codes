#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k,i,ascii;
    cin >> k;
    for(i=0;i<s.size();i++)
    {
    	ascii=int(s[i]);
    	if(ascii>=97 && ascii<=122)
    	{
    		ascii=(((int(s[i])%97+k))%26)+97;
    		s[i]=ascii;
    	}
    	if(ascii>=65 && ascii<=90)
    	{
    		ascii=(((int(s[i])%65+k))%26)+65;
    		s[i]=ascii;
    	}
	}
	cout<<s;
    return 0;
}

