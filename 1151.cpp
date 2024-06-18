#include<iostream>
using namespace std;

int main()

{
    int n,fibo,first=0,second=1,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i<=1)
            fibo=i;
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }

        if(i<n-1)
            cout<<fibo<< " ";

        else
            cout<<fibo;
    }
    cout<<endl;
    return 0;
}

