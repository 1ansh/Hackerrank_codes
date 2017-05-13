#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
	int n,k,i,j,count=0;
	cin>>n;
	cin>>k;
	int c[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	int E=100;
	    for(int i=0;(i+k)%n!=0;i+=k){
	        if(c[(i+k)%n])
	            E -= 3;
	        else
	            E -= 1;
	    }
	    if(c[0])
	        E -= 3;
	    else
	        E -= 1;
	    cout<<E;
}

