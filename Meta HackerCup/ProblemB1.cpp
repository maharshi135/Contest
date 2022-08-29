#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int r,c;
    cin >> r >> c;
    string s[r];
    for(int i=0;i<r;i++)
        cin >> s[i];
    if(r == 1 || c == 1)
    {
        int f=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(s[i][j] == '^')
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
            cout << "Impossible\n";
        else {
            cout << "Possible\n";
            for(int i=0;i<r;i++)
                cout << s[i] << '\n';
        }
        return;
    }
    cout << "Possible\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout << '^';
        cout << '\n';
    }
    return;
}

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif
    int t;
    cin >> t;
    for(int tt=1;tt<=t;tt++)
    {
        cout << "Case #" << tt << ": ";
        fun();
    }
    return 0;
}
