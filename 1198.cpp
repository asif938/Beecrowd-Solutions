#include<iostream>
using namespace std;
int main()
{
    int x,y,max,min,sub;
    while(cin>>x>>y)
    {
        if(x>y)
        {
            max=x;
            min=y;
        }

        else
            {
                max=y;
                min=x;
            }
        sub=max-min;
        cout<<sub<<endl;
    }
}
