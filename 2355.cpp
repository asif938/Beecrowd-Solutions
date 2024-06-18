#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n!=0)
    {
        int bra, ger;
        float av = n/90.0;
        bra = floor(av*1);
        ger = ceil(av*7);
        cout<< "Brasil "<< bra <<" x Alemanha "<< ger <<endl;
    }
}
