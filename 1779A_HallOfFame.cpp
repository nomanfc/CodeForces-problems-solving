#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define forn(i,x,n) for(int i=x;i<int(n);i++)

void solve()
{
    int helllo;
    cin>>helllo;
    string strrw;
    cin>>strrw;
    int riht = 0;
    for (auto i: strrw)
    {
        if(i == 'R')riht++;
    }
    if(riht =0 or riht == helllo)
    {
        cout<<-1<<endl;
        return;
    }
    for (int i=0; i<helllo-1; i++)
    {
        if(strrw[i]  == 'L' and strrw[i+1] == 'R')
        {
            cout<<i+1<<endl;
            return;
        }
        if(strrw[i] == 'R' and strrw[i+1] == 'L')
        {
            cout<<0<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
