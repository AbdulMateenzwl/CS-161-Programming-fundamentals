#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int array[5];
    for(int x=0 ; x < 5 ;x++)
    {
        cout<<"Enter ";
        cin >> array[x];
    }
    for(int x=0;x < 5 ; x++)
    {
        for(int m=x+1 ; m< 5 ;m++)
        {
            if(array[x] > array[m])
            {
                swap(array[x] , array[m]);
            }
        }
    }
    for(int x=0 ; x < 5 ;x++)
    {
        cout<<array[x]<<endl;
    }
}