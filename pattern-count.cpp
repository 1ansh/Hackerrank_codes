#include <bits/stdc++.h>

using namespace std;

int patternCount(string s)
{
	int i,l,count=0;;
	string d;
	l=s.size();
	for(i=1;i<l-1;i++)
	{
		if(s[i]=='0' && s[i-1]=='1')
		{
			i+=1;
			while((s[i]=='0'||s[i]=='1') && i<l)
			{
				if(s[i]=='1')
				{
					count++;
					break;
				}
				i+=1;
			}
		}
	}
	return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = patternCount(s);
        cout << result << endl;
    }
    return 0;
}

