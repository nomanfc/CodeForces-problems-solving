#include<iostream>
using namespace std;

int main ()
{
    int i, n, temp;
    cin>>n;

    int a[n], b[n], t[n], tt[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i] >> b[i];
    }

    tt[0] = b[0];

    for(i=1; i<n; i++)
    {
        tt[i] = (tt[i-1] + b[i]) - a[i];
    }



    for(i=0; i<n; i++)
    {
        for(int j=i+1 ; j<n; j++)
        {
            if(tt[i] < tt[j])
            {
                temp = tt[i];
                tt[i] = tt[j];
                tt[j] = temp;
            }
        }

    }

    cout << tt[0];

    return 0;
}
