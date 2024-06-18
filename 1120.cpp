#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s;
   string str;
    while(1)
    {
        cin>> s;
        cin >> str;
        //cout<< s << endl;
        //cout<< str[1] << endl;
        if(s = '0' && str[0] != '0')
            break;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] != s)
            {
                cout<< str[i];
            }
        }
    }
    return 0;
}
