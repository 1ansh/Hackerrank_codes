#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,t=0,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
		t=t+a[i][n-i-1];
	}
	printf("%d",abs(sum-t));
    return 0;
}
