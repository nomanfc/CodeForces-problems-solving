#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int wlm, wb, count=0;
    cin>> wlm>>wb;

    while(wlm <= wb)
    {
        wlm = wlm*3;
        wb = wb*2;
        count++;
    }


    cout<< count;

    return 0;
}

