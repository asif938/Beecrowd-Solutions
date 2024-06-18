#include<iostream>
using namespace std;

int main()
{
    int a,b,m;
    char n;
    cin>>m;
    cin>>a>>n>>b;
    if(n=='+')
    {
        if(a+b<=m)
            cout<< "OK" <<endl;
        else
            cout<<"OVERFLOW"<<endl;
    }
    else
    {
        if(a*b<=m)
            cout<< "OK" <<endl;
        else
            cout<<"OVERFLOW"<<endl;
    }
}
