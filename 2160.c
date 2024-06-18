#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    if(strlen(a)<=80)
        printf("YES\n");
    else
        printf("NO\n");
}
