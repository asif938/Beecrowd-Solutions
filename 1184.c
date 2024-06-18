
#include<stdio.h>
int main()
{
    double sum,avg,arr[12][12];
    char ch;
    scanf("%c",&ch);
    int n=1,i,j;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
         {
             scanf("%lf",&arr[i][j]);
         }
    }
    for(i=1;i<12;i++)
    {
        for(j=0;j<i;j++)
        {
            sum+=arr[i][j];
        }
        n++;
    }
    if(ch=='S'){
        printf("%.1lf\n",sum);
    }
    else
        printf("%.1lf\n",sum/66.0);
    return 0;
}

