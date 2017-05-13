#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	int a[m][2];
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int count[n+1];
	for(j=0;j<=n;j++)
	{
		count[j]=1;
	}
	for(k=0;k<m;k++)
	{
		count[a[k][1]]=0;
	}
	int c=0,I;
	for(i=n;i>=0;i--)
	{
		if(count[i]==0)
		{
			for(k=0;k<m;k++)
			{
				if(a[k][1]==i)
				{
					I=a[k][0];
					if(count[I]%2!=0)
					{
						c=c+count[I];
					}
				}
			}
			count[i]=c+1;
		}
		c=0;
	}
	int t=0;
	for(i=0;i<=n;i++)
	{
		if(count[i]%2==0)
		{
			t=t+1;
		}
	}
	printf("%d",t-1);
	return 0;
}
