#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if((n%4==0 && n%100!=0)||(n%400==0))
    {
        if(n%15==0)
        {
            cout<< "This is leap year."<<endl;
            cout<< "This is huluculu festival year."<<endl;
        }
        else
            cout<<"This is leap year."<<endl;
    }
    else
        cout<< "This is an ordinary year."<<endl;
}
