#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector <int> p;
    vector <int> m;
    vector <int> pe;

    int i, n, ab = 0, bc = 0, cd = 0;
    cin >> n;
    int a[n];

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(i=1; i<=n; i++)
    {
        if(a[i] == 1)
        {
            ab++;
            p.push_back(i);
        }
        else if(a[i] == 2)
        {
            bc++;
            m.push_back(i);
        }
        else
        {
            cd++;
            pe.push_back(i);
        }
    }

    int min = 0;
    if(ab <= bc && ab <= cd)
    {
        min = ab;
    }
    else if (bc <= ab && bc <= cd )
    {
        min = bc;
    }
    else
    {
        min = cd;
    }


    cout << min << endl;

    if(min > 0)
    {
        for(int j=0; j<min ; j++)
        {
            cout <<p[j] << " "<< m[j] << " "<< pe[j] <<endl;
        }
    }


    return 0;
}
