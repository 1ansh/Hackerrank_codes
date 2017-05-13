#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	long long int m,n,k;
	scanf("%lld %lld",&m,&n);
	k=(n-1)+(m-1)*n;
	printf("%lld",k);
}
