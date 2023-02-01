#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long i, n, count = 0,count2 = 0, sum = 0;
        cin >> n;
        long long a[n];

        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(i=0; i<n; i++)
        {
            sum = sum + a[i];

            if(a[i] == -1)
            {
                count++;
            }

            if(a[i] == -1 && a[i+1] == -1)
            {
                count2++;
            }
        }


        if (count2 > 0)
        {
            sum = sum + 4;
        }
        else
        {
            if(count > 0 && count2 < 1)
            {
                sum = sum;
            }
            else
            {
                sum = sum-4;
            }
        }




        cout << sum << endl;
    }


    return 0;
}
