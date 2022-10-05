#include<iostream>
using namespace std;
main()
{
    int array[3][3]={
    {2,4,5},
    {6,7,1},
    {0,1,2}
    };
    int sum=0;
    for(int x=0 ; x<3 ;x++)
    {
        for(int m=0; m < 3 ; m++)
        {
            sum=sum+array[x][m];
        }
    }
    cout<<sum;
}