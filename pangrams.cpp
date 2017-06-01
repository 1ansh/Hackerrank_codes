#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i,j,ascii,flag=0,trigger=0;
    for(i=97;i<123;i++)
    {
    	flag=0;
    	for(j=0;j<s.size();j++)
    	{
    		ascii=int(s[j]);
    		if(ascii<97)
    		{
    			ascii=ascii+32;
    			if(ascii==i)
    			{
    				flag=1;
    				break;
				}
			}
			else
			{
				if(ascii==i)
    			{
    				flag=1;
    				break;
				}
			}
		}
		if(flag==0)
		{
			trigger=1;
			break;
		}
	}
	if(trigger==0)
	{
		cout<<"pangram"<<endl;
	}
	else
	{
		cout<<"not pangram"<<endl;
	}
}

