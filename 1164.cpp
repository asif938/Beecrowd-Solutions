#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int t;
        cin >> t;
        int sum = 0;

        for(int i = 1; i<t;  i++)
        {
            if(t%i == 0)
            sum += i;
        }
        if(t == sum)
        {
            cout << t <<" eh perfeito" << endl;
        }
        else
        {
            cout << t << " nao eh perfeito" << endl;
        }
    }
}