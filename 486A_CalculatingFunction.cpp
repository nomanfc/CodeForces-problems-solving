#include<iostream>
using namespace std;

int main ()
{
    long long a, answer;
    cin>>a;

    if(a%2 == 0){
        answer = a/2;
    }
    else
    {
        answer = ((a+1)/2) * (-1);
    }

    cout<<answer;

    return 0;
}
