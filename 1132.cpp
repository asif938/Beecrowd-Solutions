#include<iostream>
using namespace std;

int main()
{
    int x,y,i,sum=0,a,b;
    cin>>x>>y;
    a=max(x,y);
    b=min(x,y);


    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}

