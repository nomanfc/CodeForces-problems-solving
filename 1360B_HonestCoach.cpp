#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, t, i, j;
    cin >> t;

    vector<int> s;

    while(t--)
    {
        cin >> n;
        int a[n];
        s.clear();
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                int dif = abs(a[i]-a[j]);
                s.push_back(dif);
            }
        }

        int st = *min_element(s.begin(), s.end());

        cout << st << endl;

    }
    return 0;
}
