#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, first, second, counter1=0, counter2=0, i;
    while(cin>>n && n!=0)
    {
        while(n--)
        {
            cin>>first>>second;

            if(first>second)
                counter1++;
            else if(first<second)
                counter2++;

        }
        cout<<counter1<<" "<<counter2<<endl;
        counter1=0;
        counter2=0;
    }

}
