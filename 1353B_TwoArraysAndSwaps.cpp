#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t;
    cin>> t;

    while(t--)
    {
        int n, k;
        cin>> n >> k;
        int a[n], b[n];

        int count = 0;

        for(i=0; i<n; i++)
        {
            cin>> a[i];
        }

        for(i=0; i<n; i++)
        {
            cin>> b[i];
        }

        sort(a, a+n);
        sort(b, b+n, greater<int>());

        for(i=0; i<k; i++)
        {
            if(a[i]  < b[i])
            {
                swap(a[i], b[i]);
            }

        }

        for(i=0; i<n; i++)
        {
            count += a[i];
        }

        cout << count << "\n";

    }

    return 0;
}
