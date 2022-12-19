#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main()
{
    int i,j, count=0;
    string name;

    cin>>name;

    sort(name.begin(), name.end());


    for(i=0; i<name.size(); i++)
    {
        if(name[i] != name[i+1])
        {
            count++;
        }
    }

    if(count%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout <<"IGNORE HIM!";
    }


    return 0;
}
