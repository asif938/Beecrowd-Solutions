#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a != b && a!= c)
            cout<< "A" <<endl;
        else if(b != a && b!= c)
            cout<< "B" <<endl;
        else if(c!=a && c!=b)
            cout<< "C" << endl;
        else
            cout<< "*" <<endl;
    }
}
