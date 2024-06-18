#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,x=0,y=0;
    cin>>n>>m;
    int a[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {

            if(a[i][j] == 42)
            {
                if(a[i-1][j-1]==7 && a[i-1][j]==7 && a[i-1][j+1]==7 )
                {
                    if(a[i][j-1]==7 && a[i][j+1]==7)
                    {
                         if(a[i+1][j-1]==7 && a[i+1][j]==7 && a[i+1][j+1]==7)
                         {
                             x = i+1;
                             y = j+1;
                         }
                    }

                }
            }

        }

    }


    cout<<x<< " " <<y<<endl;

}

