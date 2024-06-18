#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long t;
    while(n--)
    {
        int test = 0;
        cin >> t;
        
        if(t==0)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        else if(t==1)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        else if(t==2)
        {
            cout << "Prime" << endl;
            continue;
        }
        for(int i = 2; i<sqrt(t)+1; i++)
        {
            if(t%i==0)
                test++;
            if(test == 1)
            {
                break;
            }
        }
        if(test == 1)
        cout << "Not Prime" << endl;
        else
        cout << "Prime" << endl;

    }
}
