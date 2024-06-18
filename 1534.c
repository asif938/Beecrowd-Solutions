#include <stdio.h>
int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if(n%2==0)
                {
                    if (i == j)
                        printf("1");
                    else if (j + i == n + 1)
                        printf("2");
                    else
                        printf("3");
                }

                if(n%2!=0)
                {

                    if(i==n/2+1 && j==n/2+1)
                        printf("2");
                    else if(i==j)
                        printf("1");
                    else if (j + i == n + 1)
                        printf("2");
                    else
                        printf("3");
                }

            }
            printf("\n");
        }
    }
    return 0;
}
