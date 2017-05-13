#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int x1,v1,x2,v2;
    long long int i,a,b,count=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=1;i<1000000;i++)
    {
    	a=x1+i*v1;
    	b=x2+i*v2;
    	if(a==b)
    	{
    		count++;
    		break;
		}
	}
	if(count>0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
    return 0;
}

