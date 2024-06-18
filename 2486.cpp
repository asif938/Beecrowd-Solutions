#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    string str;
    while(cin>>t && t!=0)
    {
        long long int sum=0;
        for(int i=1; i<=t; i++)
        {

            cin>>n;
            cin.ignore();
            getline(cin,str);

            if(str=="suco de laranja")
                sum+=(n*120);
            else if(str=="morango fresco")
            {
                sum=sum+(n*85);
            }
            else if(str=="mamao")
            {
                sum=sum+(n*85);
            }
            else if(str=="goiaba vermelha")
            {
                sum+=(n*70);
            }
            else if(str=="manga")
            {
                sum+=(n*56);
            }
            else if(str=="laranja")
            {
                sum+=(n*50);
            }
            else if(str=="brocolis")
            {
                sum+=(n*34);
            }
        }
        if(sum<110)
        {
            int x=110-sum;
            cout<<"Mais "<< x <<" mg"<<endl;
        }
        else if(sum>130)
        {
            cout<<"Menos "<< sum-130 <<" mg"<<endl;
        }
        else
        {
            cout<<sum<< " mg"<<endl;
        }

    }
}
