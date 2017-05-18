#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;



int main()
{
	int arr[6][6],i,j,hourGlass[16];
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			cin>>arr[i][j];
		}
	}
	int I=0,max;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			hourGlass[I]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
			I++;
		}
	}
	max=hourGlass[0];
	for(i=0;i<16;i++)
	{
		if(hourGlass[i]>max)
		{
			max=hourGlass[i];
		}
	}
	cout<<max<<endl;
}
