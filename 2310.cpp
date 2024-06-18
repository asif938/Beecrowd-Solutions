#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float tservice=0, tblock=0, tattack=0;
    float ss=0, sb=0, sa=0;
    while(n--)
    {
        string name;
        cin >> name;
        float a,b,c,d,e,f;
        cin>> a >> b >> c;
        cin >> d >> e >> f;
        tservice += a;
        tblock += b;
        tattack += c;
        ss += d;
        sb += e;
        sa += f;

    }
    cout << fixed << setprecision(2) << "Pontos de Saque: " <<((ss/tservice)*100) <<" %."<<endl;
    cout << fixed << setprecision(2) << "Pontos de Bloqueio: " <<(sb/tblock)*100 <<" %."<<endl;
    cout << fixed << setprecision(2) << "Pontos de Ataque: " <<(sa/tattack)*100 <<" %."<<endl;

}