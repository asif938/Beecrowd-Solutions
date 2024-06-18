#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    while(cin>>n && n!=0)
    {

        int a[n][n];
        int half = n/2;
        if(n%2 != 0)
            half++;
        int l = 1;
        for(k = 0; k<half; k++)
        {
            for(i=k; i<n-k; i++)
            {
                for(j=k; j<n-k; j++)
                {
                    a[i][j] = l;
                }
            }
            l++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                    printf("%3d",a[i][j]);
                else
                    printf(" %3d",a[i][j]);
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
