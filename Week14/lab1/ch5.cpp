#include<iostream>
using namespace std;
void sparse(int mat[3][3])
{
    int zerocount=0;
    for(int x=0;x< 3;x++)
    {
        for(int m=0; m<3;m++)
        {
            if(mat[x][m] == 0)
            {
                zerocount++;
            }
        }
    }
    if(zerocount >= 4)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
}
main()
{
    int matrix[3][3]={
        {1,6,9},
        {0,5,0},
        {4,0,5}
    };
    sparse(matrix);
}