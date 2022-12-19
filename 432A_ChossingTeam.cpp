#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, n, k, count =0;
    cin>>n >>k;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>> a[i];
    }

    for(i=0; i<n; i++)
    {
        if(5 - a[i] >= k )
        {
            count++;
        }
    }

    cout << count/3;

    return 0;
}
