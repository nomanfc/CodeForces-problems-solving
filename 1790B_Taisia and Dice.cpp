#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, n, s, r, middle=0, remain=0;
        cin >> n >> s >> r;

        cout << s-r << " ";

        middle = r/(n-1);
        remain = r%(n-1);

        for(i=1; i<n; i++)
        {
            if(remain > 0)
            {
                cout << middle + 1 << " ";
                remain = remain - 1;
            }
            else
            {
                cout << middle << " ";
            }
        }
        cout << endl;

    }
    return 0;
}
