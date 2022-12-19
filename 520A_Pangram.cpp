#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, n, count =0;
    string w;

    cin>>n >>w;

    if(n >= 26)
    {

        for(i=0; i<n; i++)
        {
            if(w[i]<92)
            {
                w[i] += 32;
            }
        }
        sort(w.begin(), w.end());

        for(i=0; i<n; i++)
        {
            if(w[i]!= w[i+1])
            {
                count++;
            }
        }

        if(count >= 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }


    }
    else
    {
        cout << "NO";
    }

    return 0;
}
