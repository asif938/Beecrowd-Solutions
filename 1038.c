#include<stdio.h>
int main()
{
    int x,y;
    float total;
    scanf("%d%d",&x,&y);
    if(x==1)
    total = (4.00*y);
    else if(x==2)
        total = (4.50*y);
    else if(x==3)
        total = (5.00*y);
    else if(x==4)
        total = (2.00*y);
    else if(x==5)
        total = (1.50*y);

    printf("Total: R$ %.2f\n",total);
    return 0;
}
