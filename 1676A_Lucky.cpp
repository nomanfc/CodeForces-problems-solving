#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        string digit;
        int sumL = 0, sumR = 0;

        cin >> digit;

        for(int i=0; i<digit.size(); i++)
        {
            if(i < 3)
            {
                sumL = (int)(sumL+digit[i]);
            }
            else
            {
                sumR = (int)(sumR+digit[i]);
            }
        }

        if(sumL == sumR) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
