#include<bits/stdc++.h>
using namespace std;


int main ()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long i, n, count = 0;
        cin >> n;
        long long a[n];

        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(i=0; i<n-1; i++)
        {
            if((a[i]%2 != 0 && a[i+1]%2 != 0) || (a[i]%2 == 0 && a[i+1]%2 == 0))
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
