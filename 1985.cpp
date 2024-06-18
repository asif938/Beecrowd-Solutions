/*1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,i,a=1,b=1;
    double result=0,ans=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1001)
            ans=1.50*b;
        else if(a==1002)
            ans=2.50*b;
        else if(a==1003)
            ans=3.50*b;
        else if(a==1004)
            ans=4.50*b;
        else if(a==1005)
            ans=5.50*b;

        result=result + ans;



    }
    printf("%.2lf\n",result);
}
