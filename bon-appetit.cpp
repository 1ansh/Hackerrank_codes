#include <stdio.h>
main()
{
	int n,k,i,c,count=0,l;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		if(i!=k)
		{
			count=count+a[i];
		}
	}
	l=count/2;
	if(c!=l)
	{
		printf("%d",c-l);
	}
	else
	{
		printf("Bon Appetit");
	}
}

