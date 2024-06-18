/*
Compliments: Rolien
Bugs: Naej
Questions: Elehcim
Suggestions: Odranoel
*/

#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n;

    while(n--)
    {
        int m;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            cin>>m;
            if(m==1)
                cout<< "Rolien" << endl;
            else if(m==2)
                cout<< "Naej" << endl;
            else if(m==3)
                cout<< "Elehcim" <<endl;
            else if(m==4)
                cout<< "Odranoel" <<endl;
        }
    }
    return 0;
}

