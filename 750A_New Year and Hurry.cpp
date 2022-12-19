#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k, i, time = 0, count = 0;
    cin >> n >> k;

    for(i=1; i<=n; i++){

        time += (5*i);

        if( time > 0 && (time+k) <= 240){
            count++;
        }
    }

    cout << count;


    return 0;
}
