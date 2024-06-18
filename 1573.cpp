#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,result;
    while(cin >> a >> b >> c)
    {
        if(a==0 && b==0 && c==0)
            break;
        result = cbrt(a*b*c);
        cout << result << endl;
    }

}

