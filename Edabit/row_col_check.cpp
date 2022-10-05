#include<iostream>
using namespace std;
bool check(int array[3][3],int row,int col)
{
    bool check=1;
    for(int x=0;x<3;x++)
    {
        if(array[row][x] != array[x][col])
        {
            check=0;
        }
    }
    return check;
}
main()
{
    int array[3][3]={
        {1,0,1},
        {0,0,0},
        {1,0,1}
    };
    cout<<check(array,1,2);
}