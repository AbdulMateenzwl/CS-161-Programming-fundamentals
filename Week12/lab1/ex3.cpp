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
    int sum=0;
    for(int x=0 ; x <5 ; x++)
    {
        sum=sum+cars[x][0];
    }
    cout<<"Total number of red cars : "<<sum;
}