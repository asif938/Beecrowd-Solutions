#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while(cin >> a && a!=0)
    {
        int fox = 0;
        for(int i = 1; i+fox<=a; i++)
        {
            fox+=i;
        }

        cout << fox << " " << a-fox << endl;
    }
}
