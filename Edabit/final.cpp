#include<iostream>
using namespace std;
int sum(int arr[5],int num)
{
    int sum=0;
    for(int x=0;x<num;x++)
    {
        sum=sum+arr[x];
    }
    return sum;
}
bool check(int array[5],int length)
{
    bool j=1;
    for(int x=0;x<length;x++)
    {
        if((sum(array,x))  >  array[x+1] )
        {
            j=0;
            break;
        }
    }
    return j;
}
bool check1(int array[][5])
{
    bool n=1;
    // // int arr[col];
    // for(int x=0;x<row;x++)
    // {
    //     for (int m = 0; m < col; m++)
    //     {
    //         // arr[m] = array[x][m];
    //     }
    //     if (check(arr, col) == 0)
    //     {
    //         n = 0;
    //         break;
    //     }
    // }
    return n;
}
// void display(int n[][3])
// {
//     cout << "Displaying Values: " << endl;
//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 3; ++j)
//         {
//             cout << "num[" << i << "][" << j << "]: " << n[i][j];
//         }
//         cout<<endl;
//     }
// }
main()
{
    int row=2,col=5;
    int arr[row][col]={
        {1,3,6,11,23},
        {1,3,5,9,23}
    };
    cout<<check1(arr);
}
