#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n,k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    if(n > 2*k)
    {
        cout << "NO\n";
        return;
    }
    unordered_map<int,int> mp;
    for(auto i:v)
        mp[i]++;
    for(auto i:mp)
    {
        if(i.second > 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    int t =1 ;
    cin >> t;
    for(int tt=1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ": ";
        fun();
    }
    return 0;
}