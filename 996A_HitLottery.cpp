#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, ans = 0, c[]= {100, 20, 10, 5, 1};
    cin>>n;

    for(i=0; i<5; i++)
    {
        ans = ans+n/c[i];
        n = n%c[i];
    }

    cout << ans;
    return 0;
}
