
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin, s);
        set <char> charset;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                charset.insert(s[i]);
            }
        }
        int cnt = charset.size();
        if(cnt == 26)
            cout<< "frase completa"<< endl;
        else if(cnt >= 13)
            cout<< "frase quase completa"<< endl;
        else
            cout<< "frase mal elaborada"<< endl;
    }
    return 0;
}
