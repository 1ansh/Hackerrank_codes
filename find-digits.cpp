#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int no;cin>>no;
    while(no!=0){
        int n,c;
        int count=0;
        cin>>n;
        c=n;
        //cout<<c;
        int d;

        while(n!=0){
            d=n%10;
            //cout<<d<<endl;
            if(d!=0){
                if(c%d==0){
                  count++;
                }
            }
            n=n/10;
        }
    cout<<count<<endl;
    //count=0;
    no--;
    }
    return 0;
}
