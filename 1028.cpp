#include<bits/stdc++.h>
using namespace std;

int main()
{
    int divident, divisor, t, c, a, b;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        cin >> a >> b;

        if(b>a)
        {
            divident = b;
            divisor = a;
        }
        else
        {
            divident = a;
            divisor = b;
        }

        while(divident%divisor!=0)
        {
            c = divident%divisor;
            divident = divisor;
            divisor = c;
        }
        cout << divisor << endl;
    }
    return 0;
}

