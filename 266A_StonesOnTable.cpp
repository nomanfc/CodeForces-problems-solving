#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main ()
{
    int n,i;
    string s;
    int count = 0;

    cin>>n>>s;

    for(i=0; i<s.size();i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }


    cout<< count;

    return 0;
}
