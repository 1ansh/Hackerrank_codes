#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t,I;
	cin>>t;
	for(I=0;I<t;I++)
	{
		string s;
		cin>>s;
		int i,cnt_h=-1,cnt_a1=-1,cnt_a2=-1,cnt_c=-1,cnt_k1=-1,cnt_k2=-1,cnt_e=-1,cnt_r1=-1,cnt_r2=-1,cnt_n=-1;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='h' && cnt_h==-1)
			{
				cnt_h=i;
			}
			if(s[i]=='a' && cnt_h!=-1 && cnt_a1==-1 && i>cnt_h)
			{
				cnt_a1=i;
			}
			if(s[i]=='c' && cnt_c==-1 && cnt_a1!=-1 && i>cnt_a1)
			{
				cnt_c=i;
			}
			if(s[i]=='k' && cnt_k1==-1 && cnt_c!=-1 && i>cnt_c)
			{
				cnt_k1=i;
			}
			if(s[i]=='e' && cnt_e==-1 && cnt_k1!=-1 && i>cnt_k1)
			{
				cnt_e=i;
			}
			if(s[i]=='r' && cnt_r1==-1 && cnt_e!=-1 && i>cnt_e)
			{
				cnt_r1=i;
			}
			if(s[i]=='r' && cnt_r2==-1 && cnt_r1!=-1 && i>cnt_r1)
			{
				cnt_r2=i;
			}
			if(s[i]=='a' && cnt_a2==-1 && cnt_r2!=-1 && i>cnt_r2)
			{
				cnt_a2=i;
			}
			if(s[i]=='n' && cnt_n==-1 && cnt_a2!=-1 && i>cnt_a2)
			{
				cnt_n=i;
			}
			if(s[i]=='k' && cnt_k2==-1 && cnt_n!=-1 && i>cnt_n)
			{
				cnt_k2=i;
			}
		}
		if(cnt_h!=-1&&cnt_a1!=-1&&cnt_a2!=-1&&cnt_c!=-1&&cnt_k1!=-1&&cnt_k2!=-1&&cnt_e!=-1&&cnt_r1!=-1&&cnt_r2!=-1&&cnt_n!=-1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
