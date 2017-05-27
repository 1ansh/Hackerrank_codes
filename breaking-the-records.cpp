#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	long int n,i;
	cin>>n;
	long int s[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	long int max,min,count_1=0,count_2=0;
	max=s[0];
	min=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
			count_1++;
		}
		if(s[i]<min)
		{
			min=s[i];
			count_2++;
		}
	}
	cout<<count_1<<" "<<count_2<<endl;
}

