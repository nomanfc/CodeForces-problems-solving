#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    long long n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n%4!=0)
        {
            cout<<"NO\n";
        }

        else
        {
            cout<<"YES\n";
            int sum1 = 0, sum2 = 0;
            for(int i=2; i<=n; i++)
            {
                if(i%2 == 0 )
                {
                    cout<<i<<" ";
                    sum1 = sum1 + i;
                }

            }

            for(int i=1; i<n-2; i++)
            {
                if(i%2 != 0 )
                {
                    cout<<i<<" ";
                    sum2 = sum2 + i;
                }
            }

            cout << sum1 - sum2 << "\n";
        }
    }
}
