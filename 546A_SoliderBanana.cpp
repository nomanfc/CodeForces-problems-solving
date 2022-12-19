#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int w, i, k, n, h;

    cin>> k>> n>> w;

    int need = 0;

    for (i=1; i<=w; i++)
    {
        need += (k*i);
    }

    h = need - n;

    if(h < 0 )
    {
        h=0;
    }
    cout << h;

    return 0;
}

