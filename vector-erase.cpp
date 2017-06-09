#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> v;
    vector<int>::iterator i;
    int n,j,x,a,b,k;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>k;
        v.push_back(k);
    }
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}

