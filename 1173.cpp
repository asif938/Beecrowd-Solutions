#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n[10],x,i;
    cin>>x;
    for(i=0;i<10;i++)
    {
        //n[i]=x;
        printf("N[%d] = %d\n",i,x);
        x=x*2;
    }
    return 0;
}
