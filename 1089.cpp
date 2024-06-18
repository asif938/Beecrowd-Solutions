#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin>>t && t!=0)
    {
        int a[t],count=0;
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<t-1;i++)
        {
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
            {
                count++;
            }

        }
        if((a[0]>a[t-1] && a[0]>a[1]) || (a[0]<a[t-1] && a[0]<a[1]))
        {
            count++;
        }
        if((a[t-1]>a[t-2] && a[t-1]>a[0]) || (a[t-1]<a[t-2] && a[t-1]<a[0]))
        {
            count++;
        }
        cout<<count<<endl;
    }
}
