#include<iostream>
using namespace std;
const int row1=5;
const int row2=3;
void print1(int array1[row1],int array2[row1],int array3[])
{
    int count=0;
    for (int x = 0; x < row1 ; x++)
    {
        array3[count]=array1[x];
        count++;
    }
    for (int x = 0; x < row2 ; x++)
    {
        array3[count]= array2[x];
        count++;
    }
}
void display(int array[row1+row2])
{
    for(int x=0;x<row1+row2;x++)
    {
        cout<<array[x]<<" ";
    }
}
main()
{
    int array[row1]={1,2,3,4,5};
    int array2[row2]={6,7,8};
    int array3[row1+row2];
    print1(array,array2,array3);
    display(array3);
}