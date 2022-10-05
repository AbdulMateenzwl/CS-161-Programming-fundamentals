#include<iostream>
using namespace std;
const int clm=3;

void print1(int array[][clm],int z)
{
    for(int x=0;x<z;x++)
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
    print1(array,3);
    return 0;
}