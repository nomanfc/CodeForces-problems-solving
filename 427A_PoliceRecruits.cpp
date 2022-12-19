#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, count = 0, pol = 0;
    cin>> n;
    int e[n];

    for(i=0; i<n; i++)
    {
        cin>> e[i];
    }



    for(i=0; i<n; i++)
    {

        if(e[i] == -1)
        {
            if(pol > 0)
            {
                pol--;
            }
            else
            {
                count++;
            }

        }
        else
        {
            pol = pol+e[i];
        }

    }

    cout << count;


    return 0;
}
