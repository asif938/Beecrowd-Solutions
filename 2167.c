

#include <stdio.h>
int main()
{
    int n, tmp = 0, RPM, cnt = 0, ans = 0, cndtn = 1;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &RPM);
        cnt++;  ///cnt=1
        if(RPM<tmp && cndtn==1) ///temp=0
        {
            ans = cnt;
            cndtn = 0;
        }
        tmp = RPM;
    }
    printf("%d\n", ans);
    return 0;
}
