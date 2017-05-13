#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	float x,y,z,c1=0,c2=0,c3;
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			c1=c1+1;
		}
		else if(a[i]<0)
		{
			c2=c2+1;
		}
	}
	c3=n-c1-c2;
	x=c1/n;
	y=c2/n;
	z=c3/n;
	printf("%f\n%f\n%f",x,y,z);
	return 0;
}
