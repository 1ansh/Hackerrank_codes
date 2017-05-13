#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	char a[100000],ch;
	int i,j,count=1;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		ch=a[i];
		if(ch>64&&ch<91)
		{
			count++;
		}
	}
	printf("%d",count);
    return 0;
}

