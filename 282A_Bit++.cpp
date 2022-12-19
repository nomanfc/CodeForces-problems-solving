#include<iostream>
using namespace std;

int main ()
{
    int n, x=0,i;

    cin>>n;

    string inp[n];

    for(i=0; i<n; i++)
    {
        cin>>inp[i];
    }

    for(i=0; i<n; i++)
    {
        if(inp[i] == "X++" || inp[i] == "++X" )
        {
            x++;
        }
        else
        {
            x--;
        }
    }


    cout<< x;


    return 0;
}
