#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t;
    cin>> t;

    while(t--)
    {
        int a[2];

        cin >> a[0] >> a[1];

        sort(a, a+2);

        if(a[0]+a[0] >= a[1])
        {
            cout << pow(a[0]+a[0], 2) << "\n";
        }
        else
        {
            cout << pow(a[1], 2) << "\n";
        }

    }

    return 0;
}
