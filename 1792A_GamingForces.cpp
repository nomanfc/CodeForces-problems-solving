#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t,i;
    cin>> t;

    while(t--)
    {
        long long n, count = 0, monsters, dead_monsters;
        cin >> n;
        long long a[n];

        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(i=0; i<n; i++)
        {
            if(a[i] == 1)
            {
                count++;
            }
        }

        if(count%2 == 0)
        {
            monsters = count/2;
        }
        else
        {
            monsters = (count/2)+1;
        }

        dead_monsters = n - count;

        cout << monsters + dead_monsters << endl;



    }
    return 0;
}
