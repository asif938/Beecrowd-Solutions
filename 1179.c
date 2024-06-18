#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,e[5],o[5],l;
    for(i=0;i<15;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            e[j] = n;
            j++;
            if(j == 5)
            {
                for(l=0;l<5;l++)
                {
                    printf("par[%d] = %d\n",l,e[l]);
                    e[l]=0;
                    j=0;
                }
            }
        }
        else
        {
            o[k] = n;
            k++;
            if(k == 5)
            {
                for(l=0;l<5;l++)
                {
                    printf("impar[%d] = %d\n",l,o[l]);
                    o[l]=0;
                    k=0;
                }
            }
        }
    }
    for(i=0;i<5;i++)
    {
        if(o[i]==0)
            break;
        printf("impar[%d] = %d\n",i,o[i]);

    }
    for(i=0;i<5;i++)
    {
        if(e[i]==0)
            break;
        printf("par[%d] = %d\n",i,e[i]);

    }
}
