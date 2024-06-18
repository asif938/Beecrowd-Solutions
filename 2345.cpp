#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,m,n,o,p;
    int arr[4];
    for(int i = 0; i<4; i++)
    {
        cin>>arr[i];

    }
    sort(arr, arr+4);
    //cin>>a>>b>>c>>d;

    m = (arr[2]+arr[3])-(arr[0]+arr[1]);
    n = (arr[1]+arr[3])-(arr[0]+arr[2]);
    o = (arr[0]+arr[3])-(arr[1]+arr[2]);
    //p = (arr[0]+arr[1])-(arr[2]+arr[3]);
    if(m<0)
        m=m*-1;
    if(n<0)
        n=n*-1;
    if(o<0)
        o=o*-1;

    if(m<n && m<o)
        cout<< m <<endl;
    else if(n<m && n<o)
        cout<< n << endl;
    else
        cout<< o << endl;

}

