#include<bits/stdc++.h>

using namespace std;


class Box
{
	long int l,b,h;
	public:
		Box()
		{
			l=0;
			b=0;
			h=0;
		}
		Box(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		Box(const Box &box)
		{
			l=box.l;
			b=box.b;
			h=box.h;
		}
		int getLength()	
		{
			return l;
		}
		int getBreadth()	
		{
			return b;
		}
		int getHeight()	
		{
			return h;
		}
		long long CalculateVolume()
		{
			return l*b*h;
		}
    	bool operator < (Box & x)
		{
		    if(l<x.l) return true;
		    if( (b<x.b) && (l==x.l) ) return true;
		    if( (h<x.h) && (b==x.b) && (h==x.h) ) return true;     
		    else return false;
		}
};
ostream& operator<<(ostream& out, Box& B)
{
	out << B.getLength() << ' ' << B.getBreadth() << ' ' << B.getHeight();   
	return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
