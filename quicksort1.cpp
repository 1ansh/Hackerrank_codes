#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void partition(vector <int>  ar) 
{
	int l=ar.size();
	int end=l-1,i;
   swap(&ar[0],&ar[end]);
   int pivot = ar[end];
   int pIndex=0;
   for(i=0;i<end;i++)
   {
    	if(ar[i]<=pivot)
    	{
    		swap(&ar[i],&ar[pIndex]);
    		pIndex++;
		}
   }
   swap(&ar[end],&ar[pIndex]);
   for(i=0;i<l;i++)
   {
   		cout<<ar[i]<<" ";
   }
}

int main() 
{
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}
