#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={2,-4,8,4,-3,2,-5,5};
    int cursum=0;
    int maxsum=arr[0];
    for(int i=0;i<8;i++)
    {
        cursum+=arr[0];
        if(cursum>maxsum)
        {
            maxsum=cursum;
        }
        if(cursum<0)
        {
            cursum=0;
        }
    }
    cout<<maxsum;
}
