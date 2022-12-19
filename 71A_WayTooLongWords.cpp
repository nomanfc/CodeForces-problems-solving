#include<iostream>
#include <string>
using namespace std;

int main ()
{
    int i,n=0;
    cin >> n ;

    string w[n];

    for(i=0; i<n; ++i)
    {
        cin >> w[i] ;
    }

    for(i=0; i<n; ++i)
    {
        if(w[i].length() > 10)
        {
            cout << w[i][0] << "" << w[i].length() - 2 << "" << w[i][w[i].length() -1] << "\n";
        }
        else
        {
            cout << w[i]<< "\n";
        }
    }

    return 0;
}
