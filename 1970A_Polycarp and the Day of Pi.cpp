#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long t;

    cin >> t;

    string pi = "31415926535897932384626433832795028841971";

    while(t--)
    {
        long long i, count = 0;
        string s;
        cin >> s;

        for(i=0; i<s.size(); i++)
        {
            if(s[0] == pi[0])
            {
                if(s[i] == pi[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }

        }
        cout << count << endl;
    }

    return 0;
}
