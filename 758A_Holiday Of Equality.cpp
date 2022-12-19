#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, count = 0;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    for(i=0; i<n; i++)
    {
        count = count + (a[0] - a[i]);
    }

    cout << count;

    return 0;
}
