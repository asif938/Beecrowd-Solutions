#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    while(cin >> n >> k && n!=0)
    {
        int cnt = 0;
        vector<int> myVector;
        unordered_map<int, int> frequencyMap;
        for(int i = 0; i<n; i++)
        {
            int element;
            cin >> element;
            myVector.push_back(element);
            frequencyMap[i]++;
            
        }
        for (const auto& pair : frequencyMap) {
            if(pair.second>=k)
            cnt++;
        }
        cout << cnt << endl;

    }
}