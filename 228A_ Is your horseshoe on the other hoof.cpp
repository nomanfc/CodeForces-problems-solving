#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,temp,count =0;
    long long int a[100];

    for(i=0; i<4; i++)
    {
        cin>>a[i];
    }


    for(i=0; i<4; i++)
    {
        for(j= i+1; j<4; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }


    for(i=0; i < 4; ++i)
    {
        if(a[i] != a[i+1])
        {
            ++count;
        }
    }

    cout <<4-count;

    return 0;
}
