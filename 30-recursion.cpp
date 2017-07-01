#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int a)
{
    int ans;
    if(a==1)
    {
        return 1;
    }
    else
    {
        ans=a*factorial(a-1);
    }
    return ans;
}

int main() {
    int n,ans;
    cin>>n;
    ans=factorial(n);
    cout<<ans;
    return 0;
}

