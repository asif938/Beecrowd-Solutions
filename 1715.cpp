#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c,flag=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        c=0;
        for(int j=0; j<m; j++)
        {
            if(a[i][j]>0)
                c++;
        }
        if(c==m)
            flag++;
    }
    cout<<flag<<endl;
    return 0;
}

