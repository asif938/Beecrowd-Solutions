#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s[0]=='o' && s[1]=='n')
            cout<< 1 << endl;
        else if(s[0]=='o' && s[2]=='e')
            cout<< 1 <<endl;
        else if(s[1]=='n' && s[2]=='e')
            cout<< 1 << endl;
        else if((s[0]=='t' && s[1]=='w')||(s[0]=='t' && s[2]=='o') || (s[1]=='w' && s[2]=='o'))
            cout<< 2 << endl;
        else
            cout<< 3 <<endl;

    }
}
