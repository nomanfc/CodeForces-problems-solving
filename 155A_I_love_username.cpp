#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, n, count =0;
    cin>>n;
    int points[n];
    for(i=0; i<n; i++)
    {
        cin >> points[i];
    }

    int max = points[0];
    int min = points[0];

    for(i=0; i<n; i++)
    {
        if(points[i] < min)
        {
            min = points[i];
            count++;
        }
        else
        {
            if(points[i] > max)
            {
                max = points[i];
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
