#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        long long total = (1+floor((n-1)/2));

        cout << total << endl;

    }
    return 0;
}
