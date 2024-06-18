#include<stdio.h>
int main()
{
    int x,y,i=0,count;
    scanf("%d%d",&x,&y);
    while(1)
    {

        if(((y*i)-(x*i))>=y)
        {
            count=i;
            break;
        }
        i++;

    }
    printf("%d\n",count);
}
