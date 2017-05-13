#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int a[3],b[3],i,acount=0,bcount=0;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		if(a[i]>b[i])
		{
			acount++;
		}
		else if(a[i]<b[i])
		{
			bcount++;
		}
	}
	printf("%d %d",acount,bcount);
}
