#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        float x,y;
        cin >> x >> y;

        cout << showpoint;
        cout << fixed;
        cout << setprecision(1);

        if(y==0)
            cout<<"divisao impossivel" <<endl;
        else
            cout<<x/y<<endl;
    }
    return 0;
}
