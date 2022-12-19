#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int i, count = 0;
    string x, y;
    getline(cin, x);

    for(i=0; i<x.size(); i++)
    {
        if(x[i] != '{' && x[i] != ',' && x[i]!=' ' && x[i] != '}')
        {
            y.push_back(x[i]);
        }
    }

    sort(y.begin(), y.end());

    for(i=0; i<y.size(); i++)
    {
        if(y[i] != y[i+1]){
            count++;
        }
    }

    cout << count;

    return 0;
}
