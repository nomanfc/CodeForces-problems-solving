#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k, l, c, d, p, nl, np;

    int countL = 0, countSa = 0, countSl = 0;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    countL = (k*l)/nl;
    countSa = p/np;
    countSl = (d*c);

    int min = 0;

    if(countL <= countSa && countL <= countSl )
    {
        min = countL;
    }
    else if( countSa <= countL && countSa <= countSl)
    {
        min = countSa;
    }
    else
    {
        min = countSl;
    }

    cout << min/n;

    return 0;
}
