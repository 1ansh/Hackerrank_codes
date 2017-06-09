#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> v;
    vector<int>::iterator it,lower;
    int n,i,q,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        int key;
        cin>>key;
        lower=lower_bound(v.begin(),v.end(),key);
        if (v[lower - v.begin()] == key)
           cout << "Yes " << (lower - v.begin()+1) << endl;
       else
           cout << "No " << (lower - v.begin()+1) << endl;
    }
    return 0;
}

