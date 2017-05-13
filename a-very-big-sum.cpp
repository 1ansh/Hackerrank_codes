#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;
    scanf("%d",&n);
    long long int a[n],sum=0;
    for(i = 0; i < n; i++){
       scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
    printf("%lld",sum);
    return 0;
}

