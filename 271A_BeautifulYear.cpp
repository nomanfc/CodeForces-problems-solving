#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int a, w, x, y, z;

    cin >> a;

    while(true)
    {
        a = a+1;

        w = a/1000;
        x = a/100%10;
        y = a/10%10;
        z = a%10;

        if(w!=x && w!=y && w!=z && x!=y && x!=z && y!=z)
        {
            break;
        }
    }

    cout << a;

    return 0;
}
