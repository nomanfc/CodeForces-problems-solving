#include<iostream>
using namespace std;

int main ()
{
    string a;
    int i, sm=0, cp=0;

    cin >> a;

    for(i=0; i<a.size(); i++)
    {
        if(a[i] < 92)
        {
            cp++;
        }
        else
        {
            sm++;
        }
    }

    for(i=0; i<a.size(); i++)
    {
        if(sm>=cp )
        {
            if(a[i] < 92)
            {
                a[i] += 32;
            }

        }
        else
        {
            if(a[i] > 92)
            {
                a[i] -=32;
            }

        }

    }

    for(i=0; i<a.size(); i++)
    {
        cout<<a[i];
    }


    return 0;
}
