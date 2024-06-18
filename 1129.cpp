#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,e,count;
    while(cin>>n && n!=0)
    {
        for(int i=0; i<n; i++)
        {
            count=0;
            cin>>a>>b>>c>>d>>e;
            if(a<=127)
            {
                a=1;
                count++;
            }
            else
                a=0;
            if(b<=127)
            {
                b=1;
                count++;
            }
            else
                b=0;
            if(c<=127)
            {
                c=1;
                count++;
            }
            else
                c=0;
            if(d<=27)
            {
                d=1;
                count++;
            }
            else
                d=0;
            if(e<=127)
            {
                e=1;
                count++;
            }

            else
                e=0;

            if(count==1)
            {
                if(a==1)
                    cout<<"A"<<endl;
                if(b==1)
                    cout<<"B"<<endl;
                if(c==1)
                    cout<<"C"<<endl;
                if(d==1)
                    cout<<"D"<<endl;
                if(e==1)
                    cout<<"E"<<endl;

            }
            else
                cout<<"*"<<endl;
        }
    }
    return 0;
}
