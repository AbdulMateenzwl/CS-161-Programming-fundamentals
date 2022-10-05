#include<iostream>
using namespace std;
main()
{
    int array[10];
    bool yt;
    int num;
    for(int y=0 ; y < 10 ; y++)
    {
        cout<<"Enter number : ";
        cin>>array[y];
    }
    cout<<"Enter number you want to find : ";
    cin>>num;
    for(int e=0 ; e < 10 ; e++)
    {
        if(num == array[e])
        {
            yt=true;
        }
    }
    if(yt==true)
    {
        cout<<"Number found ";
    }
    else
    {
        cout<<"Number not found ";
    }
}