#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, f, nf;
    cin >> a >> b;

    if(a>b){
        f = b;
    }else {
        f = a;
    }

    nf = abs(a - b)/2;

    cout<< f << " " << nf;


    return 0;
}
