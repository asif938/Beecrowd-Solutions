#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    int r,h,w,i=1;
    double diagonal,diameter;
    while(cin>>r)
    {
        if(r==0)
            break;
        else
        {
            cin>>h>>w;

            diagonal=sqrt((h*h)+(w*w));
            diameter=2*r;

            if(diagonal<=diameter)
           {
               printf("Pizza %d fits on the table.\n",i);
           }
           else
           {
               printf("Pizza %d does not fit on the table.\n",i);
           }
        }
        i++;
    }
    return 0;
}
