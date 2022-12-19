#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long i,j, n;
    cin>>n;
    long long t[n];

    for(i=0; i<n; i++)
    {
        cin>>t[i];
    }

    for(i=0; i<n; i++)
    {
        long long count =0;
        for(j = t[i]-1; j>t[i]/2; j--)
        {
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}
