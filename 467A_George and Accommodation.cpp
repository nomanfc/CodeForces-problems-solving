#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int q[n], a[n], i, count = 0;

    for(i=0; i<n; i++)
    {
        cin>> a[i] >> q[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] < q[i] && (q[i]-a[i]) > 1)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
