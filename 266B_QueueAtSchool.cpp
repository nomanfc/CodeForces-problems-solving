#include<iostream>
using namespace std;

int main ()
{
    int i, n, t;
    char temp;
    string pos;

    cin>> n>>t>>pos;

    while (t--)
    {
        for (i = 0; i < n; ++i)
        {
            if (pos[i+1] == 'G' && pos[i] == 'B')
            {
                pos[i+1] = 'B';
                pos[i] = 'G';
                ++i;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout << pos[i];
    }

    return 0;
}
