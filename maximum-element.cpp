#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void push(long arr[],long x,long *top)
{
	*top=*top+1;
	arr[*top]=x;
}

void pop(long *top)
{
	*top=*top-1;
}


int main()
{
	long n,I,arr[100000],max[100000],topm=0,top=-1;
	max[topm]=0;
	cin>>n;
	for(I=0;I<n;I++)
	{
		long type,x,Max;
		cin>>type;
		if(type==1)
		{
			cin>>x;
			if(x>=max[topm])
			{
				topm++;
				max[topm]=x;
			}
			push(arr,x,&top);
		}
		else if(type==2)
		{
			if(arr[top]==max[topm])
			{
				topm=topm-1;
			}
			pop(&top);
		}
		else if(type==3)
		{
			cout<<max[topm]<<endl;
		}
	}
}
