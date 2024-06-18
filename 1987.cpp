#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,m,sum = 0,temp = 0;
    while(cin>>n>>m)
    {
        sum = 0;
        //cin>>n>>m;
        while(m!=0)
        {
            sum += m%10;
            //sum += temp;
            m = m/10;
        }
        if(sum%3==0)
            cout<<sum<<" sim"<<endl;
        else
            cout<<sum<<" nao"<<endl;
    }
}

