#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i;
    cin>>n;
    string w;

    while(n--)
    {
        cin >> w;
        if(w.size() > 2)
        {
            for(i=0; i<w.size()-1; i++)
            {
                if(i%2 == 0)
                {
                    cout << w[i];
                }
            }
            cout<< w[w.size()-1] << "\n";
        }
        else
        {
            cout << w << "\n";
        }


    }

    return 0;
}
