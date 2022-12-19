#include<iostream>
using namespace std;


int main ()
{
    int a, b, c, t[6], temp, i;

    cin >> a >> b >> c;

    t[0] = a+b+c;
    t[1] = a+(b*c);
    t[2] = a*(b+c);
    t[3] = (a*b*c);
    t[4] = (a+b)*c;
    t[5] = (a*b)+c;

    int m = t[0];

    for(i=1; i<6; i++)
    {
        if(m < t[i])
        {
            temp = m;
            m = t[i];
            t[i] = temp;
        }
    }

    cout<<m;

    return 0;
}
