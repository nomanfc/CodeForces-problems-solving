#include<iostream>
using namespace std;


int main ()
{
    int i, j, n, count = 0;
    cin >> n;
    int p[n][3];

    for(i=0; i<n ; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> p[i][j];
        }
    }

    for(i=0; i<n ; i++)
    {
        if((p[i][0] + p[i][1] + p[i][2]) >= 2 )
        {
            count++;
        }
    }

    cout << count ;

    return 0;
}
