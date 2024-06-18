#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0;i<12;i++)
    {
        if(n%2!=0)
        {
            printf("%d\n",n);
        }
        n++;
    }
    return 0;
}

