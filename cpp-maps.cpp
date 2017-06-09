#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{
    map<string,int> m;
    map<string,int>::iterator itr;
    int q,i;
    cin>>q;
    for(i=0;i<q;i++)
    {
        string s;
        int que,num;
        cin>>que;
        if(que==1)
        {
            cin>>s>>num;
            itr=m.find(s);
            if(itr==m.end())
                {
                m.insert(make_pair(s,num));
            }
            else
                {
                itr->second=itr->second+num;
            }
            
        }
        else if(que==2)
        {
            cin>>s;
            m.erase(s);
        }
        else
        {
            cin>>s;
            itr=m.find(s);
            if(itr==m.end())
                {
                cout<<"0"<<endl;
            }
            else
                {
                cout<<itr->second<<endl;
            }
        }
    }
    return 0;
}

