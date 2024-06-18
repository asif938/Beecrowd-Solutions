#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[101],t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            t=i+2;
            break;
        }
        else
        {
            t=0;
        }
    }
    cout<<t<<endl;
}
