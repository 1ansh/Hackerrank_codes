#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long int x1,y1,x2,y2,xc,yc;
	cin>>x1>>y1>>x2>>y2>>xc>>yc;
	long int X1,X2,Y1,Y2,X,Y,count=0;
	X1=xc-x1;
	X2=x2-xc;
	Y1=yc-y1;
	Y2=y2-yc;
	if(X1<=X2)
	{
		X=X1;
	}
	else if(X2<X1)
	{
		X=X2;
	}
	if(Y1<=Y2)
	{
		Y=Y1;
	}
	else if(Y2<Y1)
	{
		Y=Y2;
	}
	if(X==0 || Y==0)
	{
		count=0;
	}
	if(x1==x2)
	{
		count=Y;
	}
	if(y1==y2)
	{
		count=X;
	}
	else if(X!=0 && Y!=0)
	{
		count=X+Y+X*Y*2;
	}
	cout<<count;
}

