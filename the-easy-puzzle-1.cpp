#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long int t,i;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		long int n,k,j,L,count=0;
		scanf("%ld %ld",&n,&k);
		long int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%ld",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			if(a[j]%k==0)
			{
				count++;
			}
		}
		if(count>0)
		{
			printf("YES\n");
		}
		else if(count==0)
		{
			printf("NO\n");
		}
	}
}
