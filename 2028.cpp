#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,k=0,c=0;
    while(cin>>n)
    {
        c++;

        cout<<"Caso "<<c<<":";
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {

                k++;
            }

        }
        if(n==0)
            cout<<" "<<k+1<<" numero"<<endl;
        else
            cout<<" "<<k+1<<" numeros"<<endl;

        cout<<"0 ";
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                cout<<i<<" ";

            }

        }
        k=0;
        cout<<endl<<endl;
    }

    return 0;
}


