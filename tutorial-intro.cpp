#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,i,q,c=0;
	scanf("%d",&q);
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==q)
        {
        			c=i;
			}    
	}
	printf("%d",c);
    return 0;
}
