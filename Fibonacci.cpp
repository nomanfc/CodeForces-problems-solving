#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, a = 0, b = 1, c = 0, n;

    cin>> n;

    for( i = 1; i< n; i++)
    {
        while(c <= 100)
        {
            cout << c << " ";
            a = b;
            b = c;
            c = a + b;
        }

    }

    return 0;
}
