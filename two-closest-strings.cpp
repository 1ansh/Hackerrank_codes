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
		long int n,k,j,l,count=0;
		char s[100000],a[100000];
		scanf("%s",s);
		strcpy(a,s);
		scanf("%ld",&n);
		if(n==0)
		{
			printf("%s\n",s);
		}
		else if(n!=0)
		{
			l=strlen(s);
			for(j=0;j<l;j++)
			{
				if(s[j]!='a')
				{
					s[j]='a';
					count++;
				}
				if(count==n)
				{
					break;
				}
			}
			for(j=l-1;j>=0;j--)
			{
				if(count==n)
				{
					break;
				}
				else if(count!=n)
				{
					if(a[j]=='a')
				{
					s[j]='b';
					count++;
				}
				if(count==n)
				{
					break;
				}
				}
			}
			printf("%s",s);
		    printf("\n");
	}
}
}
