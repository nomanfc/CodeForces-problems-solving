#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, n, sum = 0, count = 0, test;

    vector<int> t;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        sum = sum+i;

        t.push_back(sum);
    }


    return 0;
}
