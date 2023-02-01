#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t, i;
    cin >> t;

    while(t--)
    {
        long long n, even = 0, odd = 0;
        cin >> n;
        long long a[n];

        for (i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(i=0; i<n; i++)
        {
            if(a[i]%2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        if(odd > 1)
        {
            if(even > 1 || odd > 2 )
            {
                cout << "YES" << endl;
                for(i=0; i<n; i++){

                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}
