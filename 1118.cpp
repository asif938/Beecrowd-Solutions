#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,j,i;
    float n,a[2],avg;
    while(1)
    {
        j=0;
        while(1)
        {
            cin>>n;
            if(n>=0 && n<=10)
            {
                a[j]=n;
                j++;
            }
            else
            {
                cout<<"nota invalida"<<endl;
            }
            if(j == 2)
            {
                avg = (a[0] + a[1])/2;
                printf("media = %.2f\n", avg);
                break;
            }
        }
        while(1)
        {
            cin>>x;
            cout<< "novo calculo (1-sim 2-nao)" <<endl;
            if(x==1 || x==2)
            {
                break;

            }
        }
        if(x==1)continue;
        else if(x==2)break;
    }
    return 0;
}
