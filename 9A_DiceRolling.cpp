#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, a, b=6;
    cin >> y >> w;
    a=7-max(y,w);
    for(int i=2; i<=6; i++)
    {
        if(a%i==0 && b%i==0)
        {
            a/=i;
            b/=i;

        }
    }

    cout << a << "/" << b;

    return 0;
}
