#include<iostream>
using namespace std;
main()
{
    int array[10];
    int num;
    for(int y=0 ; y < 10 ; y++)
    {
        cout<<"Enter number : ";
        cin>>array[y];
    }
    int smallest=array[0];
    for(int t=0 ; t < 10 ; t++)
    {
        if(array[t]<smallest)
        {
            smallest=array[t];
        }
    }
    cout<<"The smallest number is "<<smallest;
}
