#include<iostream>
using namespace std;
int main()
{
    int x,z,sum=0,count=0,i;
    cin>>x>>z;

    while(x>=z)
    {
        cin>>z;
    }
    for(i=x;i<=z;i++)
    {
        sum=sum+i;
        count=count+1;
        if(sum>z)
            break;

    }
    cout<<count<<endl;

}

