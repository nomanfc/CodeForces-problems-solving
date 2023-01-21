#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  k, n;
    cin>> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }

    cin >> k;



    sort(a, a+n, greater<int>());


    cout << a[k-1] << endl;

    return 0;
}
