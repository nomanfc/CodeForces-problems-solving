#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, sum=0, best=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }

    cout << best << "\n";

    return 0;
}


