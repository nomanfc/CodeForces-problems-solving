#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long num;

        cin >> num;

        long long mid = num/2;

        if(num%2 == 0)
        {
            cout << mid << " " << 1 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }

    }
    return 0;
}
