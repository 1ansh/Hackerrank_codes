#include <bits/stdc++.h>

using namespace std;

int twinArrays(vector <int> ar1, vector <int> ar2,int n)
{
    int i,min1=ar1[0],min2=ar2[0],minind1=0,minind2=0,min1_2=100001,min2_2=100001,minind1_2=100001,minind2_2=100001;
    for(i=0;i<n;i++)
    {
        if(ar1[i]<min1)
        {
            min1=ar1[i];
            minind1=i;
        }
        if(ar2[i]<min2)
        {
            min2=ar2[i];
            minind2=i;
        }
    }
    if(minind1==minind2)
        {
        for(i=0;i<n;i++)
            {
            if(i!=minind1 && ar1[i]<min1_2)
                {
                min1_2=ar1[i];
                minind1_2=i;
            }
            if(i!=minind2 && ar2[i]<min2_2)
                {
                min2_2=ar2[i];
                minind2_2=i;
            }
        }
        if(min1_2<=min2_2)
            {
            return min1_2+min2;
        }
        else
            {
            return min1+min2_2;
        }
    }
    else
        {
        return min1+min2;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2,n);
    cout << result << endl;
    return 0;
}

