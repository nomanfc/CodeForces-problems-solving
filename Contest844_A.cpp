#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >>  t;

    while(t--)
    {
        int w, d, h, a, b, f, g, sum = 0;

        cin>> w >> d>> h >> a >> b >> f >> g;

        int x = abs(b-g) + abs(w-f) + abs(w-a);
        int y = abs(a-f) + abs(d-b) + abs(d-g);

        int z = abs(b-g) + abs(0-f) + abs(0-a);
        int xx = abs(a-f) + abs(0-b) + abs(0-g);

        int t1 = min( x, y );
        int t2 = min(z, xx);

        sum = min(t1, t2) + h;

        cout << sum << endl;
    }

}

