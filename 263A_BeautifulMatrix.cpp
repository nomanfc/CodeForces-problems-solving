#include<iostream>
#include<cstdlib>
using namespace std;


int main ()
{
    int i, j, mv = 0;
    int mat[10][10];

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>mat[i][j];
        }
    }

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(mat[i][j] == 1){
                mv = abs(3-i) + abs(3-j);
            }
        }
    }

    cout << mv;

    return 0;
}
