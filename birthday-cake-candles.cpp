#include <iostream>


using namespace std;


int main(){
    long int n;
    cin >> n;
    long int i,height[n],max,count=0;
    for(i = 0;i < n;i++)
	{
        cin >> height[i];
    }
    max=height[0];
    for(i = 0;i < n;i++)
	{
        if(height[i]>max)
        {
        	max=height[i];
		}
    }
    for(i=0;i<n;i++)
    {
        if(height[i]==max)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

