#include<iostream>
using namespace std;
const int row=3;
const int clm=3;

void print1(int array[row][clm])
{
    for(int x=0;x<3;x++)
    {
        for(int m=0;m<3;m++)
        {
            cout<<array[x][m]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int array[3][3]={   {1,2,3},{4,5,6},{7,8,9}};
    print1(array);
    return 0;
}