#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count1=0,count2=0,count3=0,n;

    while(n!= 4)
    {
        cin>>n;
        if(n==4)
        {
            break;
        }

        else if(n==1)
        {
            count1++;
        }
        else if(n==2)
        {
            count2++;
        }
        else if(n==3)
        {
            count3++;
        }
        else
        {
            continue;
        }
    }

    cout<< "MUITO OBRIGADO" <<endl;
    cout<< "Alcohol: " <<count1<<endl;
    cout<< "Gasolina: " <<count2<<endl;
    cout<< "Diesel: " <<count3<<endl;

    return 0;
}




#include <stdio.h>
int main()
{
    int x, count1 = 0, count2 = 0, count3 = 0;
    while (x != 4)
    {
        scanf("%d", &x);
        if (x == 4)
        {
            break;
        }
        else if (x == 1)
        {
            count1++;
        }
        else if (x == 2)
        {
            count2++;
        }
        else if (x == 3)
        {
            count3++;
        }
        else
        {
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", count1);
    printf("Gasolina: %d\n", count2);
    printf("Diesel: %d\n", count3);
    return 0;
}
