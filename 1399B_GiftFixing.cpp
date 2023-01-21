#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long i, n, sum1 = 0;
        cin >> n;
       long long a[n], b[n];

        for( i = 0; i< n; i++)
        {
            cin >> a[i];
        }

        for(i = 0; i< n; i++)
        {
            cin >> b[i];
        }
        long long mini1 = *min_element(a, a+n);
        long long mini2 = *min_element(b, b+n);

        for( i=0; i<n; i++)
        {
            sum1 = sum1 + max((a[i] - mini1), (b[i] - mini2));
        }

               cout << sum1 << endl;
    }

    return 0;
}

