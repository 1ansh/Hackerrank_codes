#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,i,j,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j&&a[i]==a[j])
			{
				count++;
			}
		}
		if(count!=0)
		{
			count=0;
		}
		else if(count==0)
		{
			printf("%d ",a[i]);
		}
	}
    return 0;
}

