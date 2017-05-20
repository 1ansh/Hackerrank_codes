#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

long int circularWalk(long int n, long int s, long int t, long int temp, long int g, long int seed, long int p)
{
	long int i,j,mat[n][n],R[n];
	R[0]=temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat[i][j]=0;
		}
	}
    for(i=1;i<n;i++)
	{
		R[i]=(R[i-1]*g+seed)%p;
	}
	for(i=0;i<n;i++)
	{
		for(j=-R[i];j<=R[i];j++)
		{
			if((i+j)>=0 && (i+j)<(n-1))
			{
				mat[i][i+j]=1;
			}
			else if((i+j)<0)
			{
				mat[i][n+(i+j)]=1;
			}
			else if((i+j)>(n-1))
			{
				mat[i][(i+j)%n]=1;
			}
			if(j==0)
			{
				mat[i][i]=0;
			}
		}
	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			cout<<mat[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	long int dist[n],dup[n],v[n],parent[n],start,end,mindup,dupind,I=0;
	for(i=0;i<n;i++)
	{
		dist[i]=INT_MAX;
		parent[i]=INT_MAX;
		dup[i]=INT_MAX;
		v[i]=0;
	}
	start=s;
	end=t;
	dist[start]=0;
	dup[start]=0;
	parent[start]=-1;
	while(start!=end)
	{
//		cout<<start<<endl;
		for(i=0;i<n;i++)
		{
			if(mat[start][i]==1 && dist[i]>dist[start]+1 && v[i]==0)
			{
				dist[i]=dist[start]+1;
				dup[i]=dist[start]+1;
				parent[i]=start;
			}
			
		}
		v[start]=1;
		dup[start]=INT_MAX;
		mindup=dup[0];
		for(j=0;j<n;j++)
		{
			if(dup[j]<mindup)
			{
				mindup=dup[j];
				dupind=j;
			}
		}
//		if(dupind==start)
//		{
//			start=parent[start];
//		}
//		else
		{
			start=dupind;
		}
//		cin.ignore();
	}
//	for(i=0;i<n;i++)
//	{
//		cout<<dist[i]<<endl;
//	}	
	cout<<dist[t]<<endl;
}

int main()
{
	long int n,s,t;
	cin>>n>>s>>t;
	long int g,seed,p,temp;
	cin>>temp>>g>>seed>>p;
	circularWalk(n,s,t,temp,g,seed,p);
}
