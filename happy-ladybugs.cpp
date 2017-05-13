#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int g,i,n,j,k;
	scanf("%d",&g);
	for(i=0;i<g;i++)
	{
		scanf("%d",&n);
		char b[n];
		int l[n],count=0,count1=0,count2[n],count3=0;
		scanf("%s",b);
		for(j=0;j<n;j++)
		{
			count2[j]=0;
			 l[j]=b[j];
			 if(l[j]==95)
			 {
			 	count++;
			 }
		}
		if(count==0)
		{
			for(j=0;j<n;j++)
			{
				if(l[j]!=l[j-1]&&l[j]!=l[j+1])
				{
					count1++;
					break;
				}
				else
				{
					continue;
				}
			}
			if(count1>0)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
		}
		else
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(l[j]==l[k])
					{
						count2[j]=count2[j]+1;
					}
				}
			}
			for(j=0;j<n;j++)
			{
				if(count2[j]<2&&l[j]!=95)
				{
					count3++;
					break;
				}
				else
				{
					continue;
				}
			}
			if(count3>0)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
		}
	}
}
