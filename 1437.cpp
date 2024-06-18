#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n!=0)
    {
        //cin.ignore();
        string s;
        cin >> s;
        //cin.ignore();
        char tow = 'N';
        for(int i=0; i<n; i++)
        {
            //tow = 'N';
            if(s[i] == 'D' && tow == 'N')
                tow = 'L';
            else if(s[i] == 'D' && tow == 'L')
                tow = 'S';
            else if(s[i] == 'D' && tow == 'S')
                tow = 'O';
            else if(s[i] == 'D' && tow == 'O')
                tow = 'N';
            else if(s[i] == 'E' && tow == 'N')
                tow = 'O';
            else if(s[i] == 'E' && tow == 'O')
                tow = 'S';
            else if(s[i] == 'E' && tow == 'S')
                tow = 'L';
            else if(s[i] == 'E' && tow == 'L')
                tow = 'N';

        }
        cout << tow << endl;
    }
}

