#include<bits/stdc++.h>
using namespace std;


void increment (int *p)
{
    *p = *p+1;
    cout << &p << endl; //memory location of p itself;
    cout << p << endl; // memory location stored at p (a's location)
    cout << *p << endl; // value stored in the location stored in p; (value of a)
}

int main ()
{
    int a;
    a = 5;

    increment(&a);


    cout << &a; //memory location of a;

    return 0;
}
