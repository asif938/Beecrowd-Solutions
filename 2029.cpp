#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double v,r,d,a,h;
    while(cin>>v>>d)
    {
        r=d/2;
        a=3.14*r*r;
        h=v/a;

        cout<<showpoint;
        cout<<fixed;
        cout<<setprecision(2);

        cout<<"ALTURA = "<<h<<endl;
        cout<<"AREA = "<<a<<endl;
    }

    return 0;
}
