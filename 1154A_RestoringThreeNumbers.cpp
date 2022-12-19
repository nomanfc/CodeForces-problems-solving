#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, a, b, c, d, x[4];

    for(i=0; i<4; i++)
    {
        cin>> x[i];
    }

    sort(x,x+4, greater<int>());

    d = x[0];


    a = abs(d-x[1]);
    b = abs(d-x[2]);
    c = abs(d-x[3]);

    cout << a << " " << b << " " <<  c;

    return 0;
}

