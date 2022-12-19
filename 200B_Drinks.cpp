#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i;
    cin>>n;

    double a[n], total = 0, answer;

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        total = total+a[i];
    }

    answer = total/n;

    cout <<setprecision(12)<< answer;

    return 0;
}
