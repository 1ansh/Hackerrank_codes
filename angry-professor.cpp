#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main() 
{
	int t,i,j,x,y,count;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&x,&y);
		int b[x];
		for(j=0;j<x;j++)
		{
			scanf("%d",&b[j]);
		}
		for(j=0;j<x;j++)
		{
			if(b[j]<=0)
			{
				y--;
			}
		}
		if(y<=0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
		
	}
    return 0;
}
