#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, count =0;
    cin >> n;

    cout << n/2 << endl;

    if(n%2 == 0)
    {
        for(i=0; i<n/2; i++)
        {
            cout << 2 << " " ;
        }
    }
    else
    {
        for(i=0; i<(n/2)-1; i++)
        {
            cout << 2 << " " ;
        }
        cout << 3 << " ";
    }

    cout << endl;


    return 0;
}
