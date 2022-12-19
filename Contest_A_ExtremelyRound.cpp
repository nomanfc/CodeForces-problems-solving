#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int i,t, n, count=0;
    cin>>n;


    while(n--)
    {
        cin >> t;

        if(t > 19)
        {
            for(i=20; i<=t; i++)
            {
                if(i%10 == 0)
                {
                    count++;
                }
            }
                cout << count+10 << "\n";
                count =0;
        }
        else
        {
            if(t<11)
            {
                cout << t <<"\n";
            }
            else
            {
                cout << 10 << "\n";
            }
        }
    }





    return 0;
}
