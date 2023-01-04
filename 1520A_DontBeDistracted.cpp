#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t, n;
    cin>> t;

    while(t--)
    {
        cin>> n;
        string s;
        cin>>s;

        int count1 = 0;
        int count2 = 0;

        for(i=0; i<n; i++)
        {
            if(s[i] != s[i+1])
            {
                count1++;
            }
        }

        sort(s.begin(), s.end());

        for(i=0; i<n; i++)
        {
            if(s[i] != s[i+1])
            {
                count2++;
            }
        }

        if(count1 == count2)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }


    }

    return 0;
}
