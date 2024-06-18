
#include<stdio.h>
int main()
{
    int a[100],n,i,t;
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(i=2; i<=60; i++)
    {
        a[i]=a[i-1]+a[i-2];

    }

    for(i=0; i<n; i++)
    {
        scanf("%d",&t);
        printf("Fib(%d) = %d\n",t,a[t]);
    }

    return 0;
}

