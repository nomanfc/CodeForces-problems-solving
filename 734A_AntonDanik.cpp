#include<iostream>
using namespace std;


int main ()
{
    int i, n, ta = 0, td = 0;
    string a;

    cin >> n >> a;

    for(i=0; i<n; i++)
    {
        if(a[i] == 'A')
        {
            ta++;
        }
        if(a[i] == 'D')
        {
            td++;
        }
    }

    if(ta > td)
    {
        cout << "Anton";
    }
    else if(td > ta)
    {
        cout << "Danik";

    }
    else
    {
        cout << "Friendship";
    }



    return 0;
}
