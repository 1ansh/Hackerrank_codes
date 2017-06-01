#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
 

int main()
{
	int l,i,flag=0;
    string s,dup;
    getline(cin,s);
    dup=s;
    while(flag==0)
    {
	    l=s.size();
	    for(i=0;i<l-1;i++)
	    {
	    	if(s[i]==s[i+1])
	    	{
	    		s.erase(i,2);
			}
		}
		if(s==dup)
		{
			flag=1;
		}
		dup=s;
	}
	if(s.size()==0)
	{
		cout<<"Empty String"<<endl;
	}
	else
	{
		cout<<s;
	}
}

