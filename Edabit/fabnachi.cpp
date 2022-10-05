#include<iostream>
using namespace std;
main()
{
    cout<<"Enter size : ";
    int size;
    cin>>size;
    int x=0;
    int num1=0,num2=1,num3;
    for(int x=0;x<size;x++)
    {
        num3=num1+num2;
        cout<<num3<<" ,  ";
        num1=num2;
        num2=num3;
    }
}