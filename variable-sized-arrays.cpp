#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,q,i,j;
    cin>>n>>q;
    vector<int> v[n];
    for(i=0;i<n;i++)
    {
        int size;
        cin>>size;
        for(j=0;j<size;j++)
        {
            int key;
            cin>>key;
            v[i].push_back(key);
        }
    }
    for(i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }
    return 0;
}

