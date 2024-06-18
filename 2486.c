#include<stdio.h>

int main()
{
    int t,n;
    char str[50];

    while(scanf("%d",&t) && t!=0)
    {
        long long int sum=0;
        for(int i=1; i<=t; i++)
        {

            scanf("%d",&n);

            getch(str);

            if(str=="suco de laranja")
                sum+=(n*120);
            else if(str=="morango fresco")
            {
                sum=sum+(n*85);
            }
            else if(str=="mamao")
            {
                sum=sum+(n*85);
            }
            else if(str=="goiaba vermelha")
            {
                sum+=(n*70);
            }
            else if(str=="manga")
            {
                sum+=(n*56);
            }
            else if(str=="laranja")
            {
                sum+=(n*50);
            }
            else if(str=="brocolis")
            {
                sum+=(n*34);
            }
        }
        if(sum<110)
        {
            printf("Mais %lld mg",110-sum);
        }
        else if(sum>130)
        {
            printf("Menos %lld mg",sum-130);
        }
        else
        {
            printf("%lld mg",sum);
        }

    }
}

