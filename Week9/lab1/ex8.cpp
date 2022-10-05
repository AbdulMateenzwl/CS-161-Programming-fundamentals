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
    int largest=array[0];
    for(int t=0 ; t < 10 ; t++)
    {
        if(array[t]>largest)
        {
            largest=array[t];
        }
    }
    cout<<"The largest number is "<<largest;
}
