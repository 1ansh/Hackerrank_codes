#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int n,k,m,i,sum=0;
	scanf("%d",&n);
	m=5;
	for(i=1;i<=n;i++)
	{
		k=m/2;
		m=k*3;
		sum=sum+k;
	}
	printf("%d",sum);
}
