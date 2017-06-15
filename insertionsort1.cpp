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
void insertionSort(vector <int>  ar) {
	int n=ar.size();
	int k,j=n-1,key=ar[j];
	int i=j-1;
	while(i>=0 && ar[i]>key)
	{
		ar[i+1]=ar[i];
		i--;
		for(k=0;k<n;k++)
		{
			cout<<ar[k]<<" ";
		}
		cout<<endl;
	}
	ar[i+1]=key;
	for(k=0;k<n;k++)
	{
		cout<<ar[k]<<" ";
	}
	cout<<endl;
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

