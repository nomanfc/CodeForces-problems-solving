#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int i, n;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int start = 0;
    int ending = sizeof(a) / sizeof(a[0]);

    while(start < (ending-1))
    {
        int temp = a[start];
        a[start] = a[ending-1];
        a[ending-1] = temp;
        ending--;
        start++;
    }

    for(i=0; i<n; i++)
    {
        cout <<  a[i] << " ";
    }
    return 0;
}
