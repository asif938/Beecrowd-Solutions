#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v, flag = 0, temp = 0;
    while(cin >> n >> v && n!=0 && v!=0)
    {
        for(int i = v; i>=0; i--)
        {
            for(int j = v; j > 0; j--)
            {
                temp = n;
                temp -= j*j;
            }
            if(temp==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "possivel" << endl;
        else
            cout << "impossivel" << endl;
    }

}