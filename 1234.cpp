#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        getline(cin, s);
        int f=0;

        for(int i=0; i<s.size(); i++)
        {
            
            if(s[i] != ' ')
            {
                if(f==0){
                    f=1;
                    putchar(toupper(s[i]));
                }
                else{
                    f=0;
                    putchar(tolower(s[i]));
                }
            }
            else{
                cout<< " " ;
            }
        }
        cout<<endl;
    }
}
