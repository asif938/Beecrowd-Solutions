#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    while(cin >> a >> b >> c)
    {
        
        double pi = 3.1415926535897;
        double s = (a+b+c)/2;
        double triangle =  sqrt(s*(s-a)*(s-b)*(s-c));
        double r = triangle/s;
        double rose = pi*r*r;
        double violate = triangle - rose;
        double radias = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
        double circle = pi*radias*radias;
        double sun = circle - triangle;
        cout << fixed << setprecision(4) << sun << " " << violate << " " << rose << endl;

    }
}
