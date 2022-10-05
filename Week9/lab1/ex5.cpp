#include<iostream>
using namespace std;
main()
{
    int array[6];
    int sum=0,average=0;
    for(int y=0 ; y < 6 ; y++)
    {
        cout<<"Enter number : ";
        cin>>array[y];
    }
    for(int t = 0 ; t < 6 ; t++ )
    {
        cout<<"Number "<<array[t]<<endl;
        sum=sum+array[t];
    }
    cout<<"The sum is :"<<sum<<endl;
    average=sum/6;
    cout<<"The average is :"<<average<<endl;
}