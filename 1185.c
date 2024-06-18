
#include<stdio.h>
int main()
{
    double sum,avg,arr[12][12];
    char ch;
    scanf("%c",&ch);
    int n=11,i,j;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
         {
             scanf("%lf",&arr[i][j]);
         }
    }
    for(i=0;i<11;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
        n--;
    }
    if(ch=='S'){
        printf("%.1lf\n",sum);
    }
    else
        printf("%.1lf\n",sum/66.0);
    return 0;
}

