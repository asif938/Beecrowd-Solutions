#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0;
    int n;
    while(cin >> n && n !=0)
    {
        if(flag==1)
            cout<< endl;
        string x[n];
        int l=0;
        for(int i=0; i<n; i++)
        {
            cin>> x[i];
            if(x[i].length()>l)
                l=x[i].length();
        }
        for(int i=0; i<n; i++)
        {
            int g=x[i].length();
            for(int j=g; j<l; j++)
            {
                cout<< " ";
            }
            cout<< x[i]<< endl;
        }
        flag = 1;
        //cout<< endl;
    }
    return 0;
}
