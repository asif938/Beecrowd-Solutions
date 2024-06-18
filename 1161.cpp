#include<iostream>
using namespace std;
int main()
{
    long long int n,m,sum,factn,factm,i;
    while(cin>>n>>m)
    {
        factn=1;
        factm=1;

        for(i=n; i>0; i--)
        {
            factn=factn*i;

        }
        for(i=m; i>0; i--)
        {
            factm=factm*i;

        }


        sum=factn+factm;
        cout<<sum<<endl;

    }

}
