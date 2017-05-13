#include<iostream>
using namespace std;
int main(){
	int t,j;
	cin>>t;
	for(j=0;j<t;j++)
	{
    string s;
    cin >> s;
    int n = s.length(), o_count = 0, len = 0;
    for(int i=0; i<n; ++i){
        if(s[i] == '('){
            ++o_count;
            continue;
        }
        else if(s[i] == ')' && o_count > 0){
            ++len;
            --o_count;
        }
    }
    len=len*2;
    cout << len << endl;
}
}
