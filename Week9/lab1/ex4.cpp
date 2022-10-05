#include<iostream>
using namespace std;
main()
{
    int array[5];
    for(int y=0 ; y < 5 ; y++)
    {
        cout<<"Enter number : ";
        cin>>array[y];
    }
    for(int t = 0 ; t < 5 ; t++ )
    {
        cout<<"Number "<<array[t]<<endl;
    }
}