#include<iostream>
using namespace std;

int main ()
{
    int n, k, count=0;
    cin>>n>>k;

    int t[n];

    for(int i=0; i<n; i++)
    {
        cin>>t[i];
    }

    for(int i=0; i<n; i++)
    {
        if(t[i] >=1 && t[i] >= t[k-1])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
