#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n>>num;
        int c[n];
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            c[i]=abs(z-num);
        }
        int l=c[0];
        int r;
        for(int i=1;i<n;i++)
        {
            if(c[i]<l)
                l=c[i];
        }
        for(int i=0;i<n;i++)
        {
            if(l==c[i])
            {
                r=i;
                break;
            }
        }
        cout<<r+1<<endl;
    }
}
