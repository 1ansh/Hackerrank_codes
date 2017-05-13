#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int c[n],count[n],k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
		count[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(c[i]==c[j]&&i!=j&&c[j]!=0)
			{
				count[i]=count[i]+1;
				c[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		k=k+count[i]/2;
	}
	printf("%d",k);
}
