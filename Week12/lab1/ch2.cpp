#include<iostream>
using namespace std;
int matrix[3][3];
void display()
{
    for(int x=0 ; x < 3 ; x++)
    {
        for (int m=0 ; m < 3 ; m++)
        {
            cout<<"Enter Value at Index "<<"["<<x<<"]"<<"["<<m<<"] :";
            cin >> matrix[x][m];
        }
    }
}
void check()
{
    int count=0,count1=0;
    for(int x=0 ; x < 3 ; x++)
    {
        for(int m=0 ; m < 3 ; m++)
        {
            if(x==m)
            {
                if(matrix[x][m]==1)
                {
                    count++;
                }
            }
            else
            {
                if(matrix[x][m]==0)
                {
                    count1++;
                }
            }
        }
    }
    bool yt=0;
    if(count==3 && count1 == 6)
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
    display();
    check();
}