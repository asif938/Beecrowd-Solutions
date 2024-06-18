#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,cont,j,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cont=0;
        string a,b;
        cin >> a >> b;
        for(j=a.size()-1,k=b.size()-1; j>=0; j--,k--)
        {
            if(a[j] == b[k])
                cont++;
            else
                break;
        }
        if(b.size() == cont)
            cout<< "encaixa" <<endl;
        else
            cout<< "nao encaixa" << endl;
    }
}
