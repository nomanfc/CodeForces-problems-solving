#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, j, n, m, count = 0;
    cin >> n >> m;

    string a[n][m];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j] == "C" || a[i][j] == "M" || a[i][j] == "Y")
            {
                count++;
            }
        }
    }

    if(count > 0)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }


    return 0;
}
