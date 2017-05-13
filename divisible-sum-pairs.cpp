#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int main() 
{
    int n,i,j,s,k;
    scanf("%d%d",&n,&k);
    int a[n],c=0;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=a[i]+a[j];
			if(s%k==0)
			{
				c++;
			}
			
		}

	}
	printf("%d",c);
    return 0;
}

