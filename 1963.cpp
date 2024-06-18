#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cin>> a >> b;
    float t= ((b-a)*100.00)/a;
    //float result = t*100;
    cout<< fixed;
    cout<< setprecision(2);
    cout<< t << "%" << endl;
}
