#include<bits/stdc++.h>
using namespace std;

int main()
{
    int step = 5, dest, count=0;

    cin>> dest;


    int n = (dest/step);

    int nn = n*5;

    if((nn - dest) < 0){
        n = n+1;
    }

    cout << n;


    return 0;
}
