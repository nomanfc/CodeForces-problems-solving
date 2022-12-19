#include<iostream>
#include<string>
using namespace std;


int main ()
{
    int i,n;

    cin>> n;


    for(i=1; i<n; i++){
        if(i%2 == 0){
            cout<< "I love that  ";
        }
        else{
            cout << "I hate that ";
        }
    }

    if(n%2 == 1){
        cout <<"I hate it ";
    }
    else
    {
        cout << "I love it ";
    }


    return 0;
}

