#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int a[2],b[2],c[2],i,count1=0,count2=0;
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
		scanf("%d",&c[i]);
	}
	int a1[c[0]],a2[c[1]];
	for(i=0;i<c[0];i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<c[1];i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=0;i<c[0];i++)
	{
		if(a1[i]+b[0]>=a[0]&&a1[i]+b[0]<=a[1])
		{
			count1++;
		}
	}
	for(i=0;i<c[1];i++)
	{
		if(a2[i]+b[1]>=a[0]&&a2[i]+b[1]<=a[1])
		{
			count2++;
		}
	}
	printf("%d\n%d",count1,count2);
}
