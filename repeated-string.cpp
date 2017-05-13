#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long c=0;
    long y=0;
    long l;
    char a[100];
    scanf("%s",a);
    long n;
    scanf("%ld",&n);
    l=strlen(a);
    for(long i=0;i<l;i++)
        {
        if(a[i]=='a')
            {
            c++;
        }
    }
    long m=0;
    m=n/l;
    long t=0;
    t=c*m;
    long x;
    x=n%l;
    for(long i=0;i<x;i++)
        {
        if(a[i]=='a')
            y++;
        }
    long total=0;
    total=y+t;
    printf("%ld",total);
    return 0;
}
