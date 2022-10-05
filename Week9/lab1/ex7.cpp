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
    cout<<"Enter number you want to multiply";
    cin>>num;
    for(int t=0 ; t < 10 ; t++)
    {
        cout<<array[t]<<"  *  "<<num<<"  =  "<<array[t]*num<<endl;
    }
}