#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,j,k;
    cin>>n;
    vector<int> v;
    vector<int>::iterator i;
    for(j=0;j<n;j++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}

