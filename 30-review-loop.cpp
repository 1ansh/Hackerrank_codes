#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int j;
        for(j=0;j<s.length();j=j+2)
        {
            cout<<s[j];
        }
        cout<<" ";
        for(j=1;j<s.length();j=j+2)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}

