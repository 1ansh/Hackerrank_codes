#include <bits/stdc++.h>

using namespace std;

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++)
	{
       for(int s_j = 0;s_j < 3;s_j++)
	   {
          cin >> s[s_i][s_j];
       }
    }
    int count[8];
    count[0]=abs(4-s[0][0])+abs(9-s[0][1])+abs(2-s[0][2])+abs(3-s[1][0])+abs(5-s[1][1])+abs(7-s[1][2])+abs(8-s[2][0])+abs(1-s[2][1])+abs(6-s[2][2]);
    count[1]=abs(8-s[0][0])+abs(1-s[0][1])+abs(6-s[0][2])+abs(3-s[1][0])+abs(5-s[1][1])+abs(7-s[1][2])+abs(4-s[2][0])+abs(9-s[2][1])+abs(2-s[2][2]);
    count[2]=abs(6-s[0][0])+abs(1-s[0][1])+abs(8-s[0][2])+abs(7-s[1][0])+abs(5-s[1][1])+abs(3-s[1][2])+abs(2-s[2][0])+abs(9-s[2][1])+abs(4-s[2][2]);
    count[3]=abs(2-s[0][0])+abs(9-s[0][1])+abs(4-s[0][2])+abs(7-s[1][0])+abs(5-s[1][1])+abs(3-s[1][2])+abs(6-s[2][0])+abs(1-s[2][1])+abs(8-s[2][2]);
    count[4]=abs(8-s[0][0])+abs(3-s[0][1])+abs(4-s[0][2])+abs(1-s[1][0])+abs(5-s[1][1])+abs(9-s[1][2])+abs(6-s[2][0])+abs(7-s[2][1])+abs(2-s[2][2]);
    count[5]=abs(4-s[0][0])+abs(3-s[0][1])+abs(8-s[0][2])+abs(9-s[1][0])+abs(5-s[1][1])+abs(1-s[1][2])+abs(2-s[2][0])+abs(7-s[2][1])+abs(6-s[2][2]);
    count[6]=abs(6-s[0][0])+abs(7-s[0][1])+abs(2-s[0][2])+abs(1-s[1][0])+abs(5-s[1][1])+abs(9-s[1][2])+abs(8-s[2][0])+abs(3-s[2][1])+abs(4-s[2][2]);
    count[7]=abs(2-s[0][0])+abs(7-s[0][1])+abs(6-s[0][2])+abs(9-s[1][0])+abs(5-s[1][1])+abs(1-s[1][2])+abs(4-s[2][0])+abs(3-s[2][1])+abs(8-s[2][2]);
    int min=count[0];
    for(int i=0;i<8;i++)
    {
    	if(count[i]<min)
    	{
    		min=count[i];
		}
	}

	cout<<min;

    return 0;
}

