#include<iostream>
using namespace std;

int main ()
{
    int n, i, count=0;
    cin>>n;

    int a[100000];
    i =0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(i=0; i<n; i++)
    {
        if(a[i] != a[i+1])
        {
            count++;
        }
    }

    cout <<  count;


    return 0;
}
