#include <bits/stdc++.h>

using namespace std;
bool myfunc(string a,string b)
{
	int x=a.length();
	int y=b.length();
	if(x==y)
	{
		return (a<b);
	}
	return (x<y);
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(),unsorted.end(),myfunc);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cout << unsorted[unsorted_i] << endl;
    }
    return 0;
}

