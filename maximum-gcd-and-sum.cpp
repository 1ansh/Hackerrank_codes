#include <bits/stdc++.h>

using namespace std;

int main() 
{
//	int start_s=clock();
    int i,n,mx=0,j,ans,temp1,temp2;
    cin >> n;
    vector<int> A(n);
    vector<int> freq1(1000001,0);
    for(i = 0; i < n; i++){
       cin >> A[i];
       freq1[A[i]]++;
       if(A[i]>mx)
       {
    		mx=A[i];
	   }
    }
    vector<int> B(n);
    vector<int> freq2(1000001,0);
    for(i = 0; i < n; i++){
       cin >> B[i];
       freq2[B[i]]++;
       if(B[i]>mx)
       {
    		mx=B[i];
	   }
    }
    for(i=mx;i>=1;i--)
    {
    	int cnt1=0,cnt2=0;
    	j=i;
    	while(j<=mx)
    	{
    		if(freq1[j]>0)
    		{
    			temp1=j;
    			cnt1++;
			}
			if(freq2[j]>0)
    		{
    			temp2=j;
    			cnt2++;
			}
			j+=i;
		}
		if(cnt1>=1 && cnt2>=1)
		{
			break;
		}
	}
	cout<<temp1+temp2<<endl;
//    int stop_s=clock();
//	cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    return 0;
}
