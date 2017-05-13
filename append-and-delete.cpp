#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>


using namespace std;


int main(){
    string s,t;
    int k,i,l,m,count=0;
    cin>>s;
    cin>>t;
    cin>>k;
    l=s.length();
    m=t.length();
    for(i=0;i<l;i++)
    {
    	if(s[i]==t[i])
    	{
    		count++;
		}
		else
		{
			break;
		}
	}
	if(count==0&&k>=l+m)
	{
		cout<<"Yes"<<endl;
	}
	else if(count==0&&k<l+m)
	{
		cout<<"No"<<endl;
	}
	else if(count>0&&(l-count)+(m-count)%2==0)
	{
		if(k<(l-count)+(m-count))
		{
			cout<<"No"<<endl;
		}
		else if(k>=(l-count)+(m-count)&&k<=(l+m)&&k%2!=0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	else if(count>0&&(l-count)+(m-count)%2!=0)
	{
		if(k<(l-count)+(m-count))
		{
			cout<<"No"<<endl;
		}
		else if(k>=(l-count)+(m-count)&&k<=(l+m)&&k%2==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}

