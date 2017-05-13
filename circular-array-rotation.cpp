#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,q,i;
    scanf("%d%d%d",&n,&k,&q);
    int a[n],b[q];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	int z=k%n;
	for(i=0;i<q;i++)
	{
		scanf("%d",&b[i]);
		
	}
	for(i=0;i<q;i++)
	{
		if(b[i]-z>=0)
	    {
		printf("%d",a[b[i]-z]);
	    }
		else
		{
		printf("%d",a[b[i]-z+n]);
	    }
	    printf("\n");
	}
	
}
	
