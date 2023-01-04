#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long i, t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];

        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n, greater<int>());



        cout << a[0] - a[n-1] << endl;
    }

    return 0;
}
