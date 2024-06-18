#include<stdio.h>
int main()
{
    int c,i,j;
    double a=0.0, m[12][12];
    char t[2];
    scanf("%d",&c);
    scanf("%s",&t);
    for(i=0; i<=11; i++)
    {
        for(j=0; j<=11; j++)
        {
            scanf("%lf",&m[i][j]);
            if(c==i)
            {
                a+=m[i][j];
            }
        }
    }
    if(t[0]=='S')
    {
        printf("%.1lf\n",a);
    }
    else if(t[0]=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;

}
