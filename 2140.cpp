#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,diff,count=0;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        diff=m-n;
        if(diff>=100)
        {
            count++;
            diff=diff-100;
        }

        if(diff>=50 && diff<100)
        {
            count++;
            diff=diff-50;
        }
        if(diff>=20 && diff<50)
        {
            count++;
            diff=diff-20;
        }
        if(diff>=10 && diff<20)
        {
            count++;
            diff=diff-10;
        }
        if(diff>=5 && diff<10)
        {
            count++;
            diff=diff-5;
        }
        if(diff>=2 && diff<5)
        {
            count++;
            diff=diff-2;
        }
        if(count==2 && diff == 0)
        {
            cout<<"possible"<<endl;
        }
        else
            cout<<"impossible"<<endl;

        count=0;

    }
    return 0;
}
