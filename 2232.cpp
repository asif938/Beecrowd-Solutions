#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin >> t;
    while(t--)
    {
        cin >> i;
        long long result = (pow(2,i)-1);
        cout << result << endl;
    }
    return 0;
}

