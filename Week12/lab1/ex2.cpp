#include<iostream>
using namespace std;
main()
{
    int cars[5][5]={
    {10,7,12,10,4},
    {23,19,12,16,14},
    {18,11,15,17,2},
    {7,12,16,0,2},
    {3,5,6,2,1}
    };
    for(int x=0 ; x <5 ; x++)
    {
        cout << cars[x][3] << "\t";
    }
}