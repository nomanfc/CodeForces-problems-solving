#include<bits/stdc++.h>
using namespace std;


int BST (int values, int ns, int as[])
{
    int low = 0;
    int high = (ns-1);

    while(low <= high)
    {
        int mid = (high+low)/2;

        if(as[mid] == values)
        {
            return mid;
        }
        else if(as[mid] < values)
        {
            low = mid + 1;
        }
        else if(as[mid] > values)
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main ()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int value;
    cin >> value;



    int found = BST(value, 10, a);

    if(found > -1)
    {
        cout << "found at index " << found+1 << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }


    return 0;
}
