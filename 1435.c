#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n) && n!=0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==1 || i==n || j==1 || j==n)
                    printf("1");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}
