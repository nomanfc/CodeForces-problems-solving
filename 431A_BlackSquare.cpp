#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i, a1, a2, a3, a4, count = 0;

    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i] == '1')
        {
            count = count+a1;
        }
        else if(s[i] == '2')
        {
            count = count+a2;
        }
        else if(s[i] == '3')
        {
            count = count+a3;
        }
        else if(s[i] == '4')
        {
            count = count+a4;
        }
    }


    cout << count;


    return 0;
}
