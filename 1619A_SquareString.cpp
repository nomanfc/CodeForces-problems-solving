#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t, i;
    cin >> t;

    while(t--)
    {
        int count = 0;
        string a;
        cin >> a;

        sort(a.begin(), a.end());

        if(a.size()%2 == 0)
        {
            for(i=0; i<a.size(); i++)
            {
                {
                    if(a[i] == a[i+1])
                    {
                        count++;
                    }
                }

            }

            if(count%2 == 0)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }


    }

    return 0;
}
