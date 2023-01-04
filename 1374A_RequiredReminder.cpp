#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long i, t, x, y, n, k, temp;

    cin >> t;

    while(t--)
    {
        cin>>x>>y>>n;

        temp = 0;
        temp = n - n % x + y;
        if(temp <= n)
        {
            cout<<temp<<endl;
        }
        else
        {
            cout<<(n - n % x - (x - y))<<endl;
        }
    }

    return 0;
}
