#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n[20],i,j;
    for(i=19;i>=0;i--)
    {
        cin>>n[i];
    }
    for(i=0;i<20;i++)
    {

        printf("N[%d] = %d\n",i,n[i]);

    }
}
