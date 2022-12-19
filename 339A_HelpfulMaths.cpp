#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main ()
{
    int i;
    string str;
    string new_str;
    char temp;
    cin >> str;


    for(i=0; i<str.size(); i++)
    {
        if(str[i] != '+')
        {
            new_str.push_back(str[i]);
        }
    }

    sort(new_str.begin(), new_str.end());

    cout << new_str[0];
    for(i=1; i<new_str.size(); i++)
    {
        cout << "+" << new_str[i];
    }



    return 0;
}
