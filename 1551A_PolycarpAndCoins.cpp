#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t;
    cin >> t;

    while(t--)
    {
        int n, c1, c2;
        cin >> n;

        c1 = n/3;

        if((n-c1)%2 == 0)
        {
            c2 = (n-c1)/2;
        }
        else
        {
            c1 = c1+1;
            c2 = (n-c1)/2;
        }

        cout << c1  << " " << c2 << endl;

    }
    return 0;
}
