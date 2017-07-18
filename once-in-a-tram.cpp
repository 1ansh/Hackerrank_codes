#include<bits/stdc++.h>
using namespace std;



int main()
{
	int x,i;
	cin>>x;
	for(i=x+1;i<1000000;i++)
	{
		int j,dup = i;
		int ar[6];
		j=0;
		while(dup!=0)
		{
			ar[j]=dup%10;
			dup=dup/10;
			j++;
		}
		if(ar[0]+ar[1]+ar[2] == ar[3]+ar[4]+ar[5])
		{
			for(i=5;i>=0;i--)
			{
				cout<<ar[i];
			}
			break;
		}
	}
	
}
