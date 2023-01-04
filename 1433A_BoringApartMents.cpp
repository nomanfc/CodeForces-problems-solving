#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t;
    cin >> t;

    while(t--)
    {
        int a;
        cin >> a;
        int count = 0;
        int f = a%10;
        int l = to_string(a).length();

        int ans = (f-1)*10;

        for(i=1; i<=l; i++)
        {
            count = count+i;
        }

        cout << ans+count << endl;
    }

    return 0;
}
