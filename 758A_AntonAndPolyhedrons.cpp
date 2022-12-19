#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, count=0;
    string name;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> name;

        if(name=="Tetrahedron")
        {
            count+=4;
        }
        else if(name=="Cube")
        {
            count+=6;
        }
        else if(name=="Octahedron")
        {
            count+=8;

        }
        else if(name=="Dodecahedron")
        {
            count+=12;
        }
        else if(name=="Icosahedron")
        {
            count+=20;
        }
    }

    cout << count;


    return 0;
}
