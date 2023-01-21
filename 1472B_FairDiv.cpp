#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int c[n];
        for(i=0; i<n; i++)
        {
            cin >> c[i];
        }

        if(n > 0)
        {
            int count1 = 0, sum = 0, div = 0;

            for(i=0; i<n; i++)
            {
                if(c[i] == 1)
                {
                    count1++;
                    sum++;
                }
                else
                {
                    sum += 2;
                }
            }

            if(sum % 2 == 0)
            {
                div = sum/2;
                if(div % 2 == 0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    if(count1)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
