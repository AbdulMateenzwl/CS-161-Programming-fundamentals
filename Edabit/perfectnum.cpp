#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number :";
    cin >> num;
    int total=0;
    for(int x =1 ; x < num ; x++)
    {
        if(num%x == 0)
        {
            total=total+x;
        }
    }
    cout<<total;
}