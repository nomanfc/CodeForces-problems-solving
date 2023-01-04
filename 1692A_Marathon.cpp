#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t;
    cin >> t;

    while(t--)
    {
        int a[4], count = 0;

        for(i=0; i<4; i++)
        {
            cin >> a[i];
        }

        for(i=0; i<4; i++)
        {
            if(a[0] < a[i])
            {
                count++;
            }
        }

        cout << count << "\n";
    }
    return 0;
}
