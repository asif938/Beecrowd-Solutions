#include<iostream>
using namespace std;
int main()
{
    int x,y,min,max,i;
    cin>>x>>y;
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

    for(i=min+1;i<max;i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout<<i<< endl;
        }
    }
	return 0;
}
