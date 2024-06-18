#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        vector <int> v;
        while(n--){
            int a;
            cin>>a;
            v.push_back(a);

        }
        sort(v.begin(), v.end());
        for(int num : v)
        {
            cout << setw(4) << setfill('0') << num << endl;
        }

    }
}
