#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a, b;
        cin>>a >> b;

        int div = abs(a-b)/10;
        int rem = abs(a-b)%10;

        if(rem != 0)
        {
            cout << div+1 << "\n";
        }
        else
        {
            cout << div << "\n";
        }
    }
    return 0;
}
