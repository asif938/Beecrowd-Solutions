#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],i,count;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
            count++;
    }
    if(count%2==0)
        printf("%s0\n",a);
    else
        printf("%s1\n",a);

}
