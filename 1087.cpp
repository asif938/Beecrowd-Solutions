#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while(cin>> a >> b >> c >> d)
    {
        if(a==0 && b==0 && c==0 && d==0)
        break;
        if(a==c && b==d)
        cout<< "0"<<endl;
        else if((c==a) || (b==d))
        cout<< "1" << endl;
        else if(abs(c-a)==abs(d-b))
        cout<< "1" << endl;
        else 
        cout<< "2" << endl;
    }

    return 0;
}