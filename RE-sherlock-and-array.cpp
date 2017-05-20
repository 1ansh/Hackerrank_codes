#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main() 
{
	int t,i,j,k,l,x,y,n,count1=0,count2=0,count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d",&x);
	if(x==1)
	{
		int c[x];
		for(n=0;n<1;n++)
		{
			scanf("%d",&c[n]);
		}
		printf("YES\n");
	}
	else
	{
	int b[x];
	for(j=0;j<x;j++)
	{
		scanf("%d",&b[j]);
	}
	for(j=1;j<x-1;j++)
	{
		for(k=0;k<j;k++)
		{
			count1=count1+b[k];
		}
		for(l=j+1;l<x;l++)
		{
			count2=count2+b[l];
		}
		if(count1==count2)
		{
			break;
		}
		else
		{
			count1=0;
			count2=0;
		}
	}
		if(count1==count2&&count1>0&&count2>0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
}
    return 0;
}

