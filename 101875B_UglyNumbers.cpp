#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    string num;
    cin >> n >> num;
    for (long long  i = 0; i < n - 1; i++)
    {
        string shift = num.substr(n - 1 - i) + num.substr(0, n - 1 - i);
        if (shift < num)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
