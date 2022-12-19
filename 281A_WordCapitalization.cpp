#include<iostream>
using namespace std;


int main ()
{
    string w;
    int i;


    cin >> w;

    if(w[0] > 92) {
        w[0] -= 32;
    }

    cout <<w ;

    return 0;

}
